//
// Created by anna on 11/12/20.
//

#ifndef RPG_ADVENTURE_INPUTOUTPUT_H
#define RPG_ADVENTURE_INPUTOUTPUT_H
#include "Player.h"
#include <iostream>

class InputOutput {
public:
    // InputOutput();
    int WriteState(Player player, std::string FileName);
    std::string ReadState(std::string FileName);

};


#endif //RPG_ADVENTURE_INPUTOUTPUT_H
