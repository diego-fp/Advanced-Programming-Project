//
// Created by anna on 11/12/20.
//

#include "InputOutput.h"
#include <fstream>

int InputOutput::WriteState(Player player, std::string filename) {
    std::cout << "Saving Game!" << std::endl;
    std::ofstream outfile(filename); // if we add std::ios_base::in file is not opened
    if (!outfile.is_open()) {return EXIT_FAILURE;}
    outfile << player.name() << " " << player.HP() << std::endl;
    std::cout << "Game Saved!" << std::endl;
    return 0;
}

std::string InputOutput::ReadState(std::string filename) {}

//InputOutput::InputOutput() {}
