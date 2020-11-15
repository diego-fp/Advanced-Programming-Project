//
// Created by anna on 11/12/20.
//

#ifndef RPG_ADVENTURE_INPUTOUTPUT_H
#define RPG_ADVENTURE_INPUTOUTPUT_H
#include "Player.h"
#include <iostream>

class InputOutput {
public:
    //InputOutput();
    int WriteState(Player player, std::string filename);
    int ReadState(std::string filename);
    std::string name() const;
    int hp() const;
private:
    std::string name_;
    int hp_;
};


#endif //RPG_ADVENTURE_INPUTOUTPUT_H
