//
// Created by anna on 11/12/20.
//

#include "Player.h"
#include <string>
#include <iostream>

Player::Player(std::string name): name_{name} {}
int Player::HP() {
        return HP_;
}

std::string Player::name() {
return name_;
}

void Player::UpdateHP(int number) {
    HP_ += number;
}

void Player::Fight(){
    std::cout << "Fighting >>> ***" << std::endl;
    int val = - std::rand() % 10;
    UpdateHP(val);
}

void Player::ShowStats(){
    std::cout << name() <<"'s stats" << std::endl;
    std::cout << "HP: " << HP() << std::endl;
}