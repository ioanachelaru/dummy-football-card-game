cmake_minimum_required(VERSION 3.10)

# Project name and version
project(FootballCardGame VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(domain)
include_directories(repository)
include_directories(persistence)
include_directories(service)

# Source files
file(GLOB DOMAIN_SOURCES "domain/*.cpp")
file(GLOB REPOSITORY_SOURCES "repository/*.cpp")
file(GLOB PERSISTENCE_SOURCES "persistence/*.cpp")
file(GLOB SERVICE_SOURCES "service/*.cpp")
file(GLOB MAIN_SOURCES "main.cpp")

# Combine all source files
set(SOURCES ${DOMAIN_SOURCES} ${REPOSITORY_SOURCES} ${PERSISTENCE_SOURCES} ${SERVICE_SOURCES} ${UI_SOURCES} ${MAIN_SOURCES})

# Add executable target
add_executable(FootballCardGame ${SOURCES})

# Link libraries if needed (for example, SQLite or JSON)
find_package(SQLite3 REQUIRED)
find_package(JsonCpp REQUIRED)

target_link_libraries(FootballCardGame PRIVATE SQLite::SQLite3 JsonCpp::JsonCpp)

# Unit testing
enable_testing()

# Add tests
add_executable(RunUnitTests
    tests/CardTests.cpp
)

target_link_libraries(RunUnitTests PRIVATE FootballCardGame)

# Add a test case
add_test(NAME UnitTests COMMAND RunUnitTests)

# Optionally include extra libraries for testing (e.g., GoogleTest)
# find_package(GTest REQUIRED)
# target_link_libraries(RunUnitTests PRIVATE GTest::GTest GTest::Main)
