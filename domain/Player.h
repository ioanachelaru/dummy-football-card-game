#include <string>

using std::string;

namespace domain{
class Player {
    private :
        int _id;
        string _name;
        int _shirtNumber;
        float _height;
        float _weight;
        string _position;
        bool _isTitular;
        string _description;

    public :
        Player();
        Player(int id, string name, int shirtNumber, float height, float weight, string position, bool isTitular, string description);

        void setPlayerId(int id);
        int getPlayerId();
        
        void setPlayerName(string name);
        string getPlayerName();

        void setPlayerShirtNumber(int shirtNumber);
        int getPlayerShirtNumber();

        void setPlayerHeight(float height);
        float getPlayerHeight();

        void setPlayerWeight(float weight);
        float getPlayerWeight();

        void setPlayerPosition(string position);
        string getPlayerPosition();

        void setPlayerIsTitular(bool isTitular);
        bool getPlayerIsTitular();

        void setPlayerDescription(string description);
        string getPlayerDescription();
}
}