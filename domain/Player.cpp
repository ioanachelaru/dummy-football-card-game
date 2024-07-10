#include "Player.h"

using domain::Player;

Player::Player() {
    _id = 0;
    _name = "";
    _shirtNumber = 0;
    _height = 0.0;
    _weight = 0.0;
    _position = "";
    _isTitular = false;
    _description = "";
}

Player::Player(int id, string name, int shirtNumber, float height, float weight, string position, bool isTitular, string description) {
    _id = id;
    _name = name;
    _shirtNumber = shirtNumber;
    _height = height;
    _weight = weight;
    _position = position;
    _isTitular = isTitular;
    _description = description;
}

void Player::setPlayerId(int id) {
    _id = id;
}

int Player::getPlayerId() {
    return _id;
}

void Player::setPlayerName(string name) {
    _name = name;
}

string Player::getPlayerName() {
    return _name;
}

void Player::setPlayerShirtNumber(int shirtNumber) {
    _shirtNumber = shirtNumber;
}

int Player::getPlayerShirtNumber() {
    return _shirtNumber;
}

void Player::setPlayerHeight(float height) {
    _height = height;
}

float Player::getPlayerHeight() {
    return _height;
}

void Player::setPlayerWeight(float weight) {
    _weight = weight;
}

float Player::getPlayerWeight() {
    return _weight;
}

void Player::setPlayerPosition(string position) {
    _position = position;
}

string Player::getPlayerPosition() {
    return _position;
}

void Player::setPlayerIsTitular(bool isTitular) {
    _isTitular = isTitular;
}

bool Player::getPlayerIsTitular() {
    return _isTitular;
}

void Player::setPlayerDescription(string description) {
    _description = description;
}

string Player::getPlayerDescription() {
    return _description;
}
