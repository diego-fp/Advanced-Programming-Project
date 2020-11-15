//
// Created by anna on 11/12/20.
//

#include "InputOutput.h"
#include <fstream>

int InputOutput::WriteState(const Player& player, const std::string& filename) {
    std::cout << "Saving Game!" << std::endl;
    std::ofstream outfile(filename); // if we add std::ios_base::in file is not opened
    if (!outfile.is_open()) {return EXIT_FAILURE;}
    outfile << player.name() << " " << player.HP() << std::endl;
    std::cout << "Game Saved!" << std::endl;
    return 0;
}

int InputOutput::ReadState(const std::string& filename) {
    std::ifstream infile(filename);
    while (infile >> name_ >> hp_){
        std::cout << "loaded: " << name_ << " " << hp_ << std::endl;
    }
    return 0;
}

std::string InputOutput::name() const { return name_;}
int InputOutput::hp() const {return hp_;}

//InputOutput::InputOutput() {}
