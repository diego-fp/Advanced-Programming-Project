#include <iostream>
#include "Player.h"
#include "InputOutput.h"

using std::string;

Player CreatePlayer(){
    std::cout << "select a name: ";
    string name;
    std::cin >> name;
    Player my_player{name};
    std::cout << name << std::endl;
    return my_player;
}



void GameLoop(Player player){
    while (true) {
        if (player.HP() <= 0){
            std::cout << "Game Over! Bye!" << std::endl;
            break;
        }

        std::cout << player.name() << " has " << player.HP() << " HP" << std::endl;
        std::cout << "1.- Fight" << std::endl;
        std::cout << "2.- Show stats" << std::endl;
        std::cout << "3.- Save" << std::endl;
        std::cout << "4.- Exit" << std::endl;
        int input;
        std::cout << "Input your choice: ";
        std::cin >> input;
        if (input == 1) {
            player.Fight();
        }
        else if (input == 2){
            player.ShowStats();
        }
        else if (input == 3){
            InputOutput saver;
            saver.WriteState(player, "save.txt");
        }
        else if (input == 4){
            std::cout << "Bye!" << std::endl;
            break;
        }
    }
}




int main() {
    std::cout << "Welcome to the RPG adventure!\n Please select one option:" << std::endl;
    std::cout << "1.- New Game" << std::endl;
    std::cout << "2.- Load Game" << std::endl;
    std::cout << "3.- Exit" << std::endl;
    int input;
    std::cout << "Input your choice: ";
    std::cin >>  input;
    std::cout << input << std::endl;
    if (input == 1) {
        Player player = CreatePlayer();
        GameLoop(player);
    }

    return 0;
}
