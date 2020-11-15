//
// Created by anna on 11/12/20.
//

#ifndef RPG_ADVENTURE_PLAYER_H
#define RPG_ADVENTURE_PLAYER_H
#include <string>

class Player {
public:
    Player(std::string name, int HP);
    int HP();
    std::string name();
    void UpdateHP(int number);
    void Fight();
    void ShowStats();

private:
    std::string name_;
    int HP_;
};

#endif //RPG_ADVENTURE_PLAYER_H
