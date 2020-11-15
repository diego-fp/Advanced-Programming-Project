//
// Created by anna on 11/12/20.
//

#include "InputOutput.h"
#include <fstream>
using namespace std;

int InputOutput::WriteState(Player player, string FileName) {
    ofstream outfile(FileName);
    if (! outfile.is_open()) {return EXIT_FAILURE; }
    outfile << player.name() << " " << player.HP() << endl;
    return 0;
}

string InputOutput::ReadState(std::string FileName) {}