//
// Created by anna on 11/12/20.
//

#include "Player.h"
#include <string>
#include <iostream>

Player::Player(std::string name, int HP): name_{name}, HP_{HP} {}
int Player::HP() const{
        return HP_;
}

std::string Player::name() const{
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

void Player::ShowStats() const{
    std::cout << name() <<"'s stats" << std::endl;
    std::cout << "HP: " << HP() << std::endl;
}