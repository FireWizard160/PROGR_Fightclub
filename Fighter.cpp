//
// Created by lukas on 02.05.2024.
//

#include <iostream>
#include "Fighter.h"

Fighter::Fighter() {

}

int Fighter::getFighterHP() {
    return health;
}

void Fighter::setFighterHP(int value){
    health += value;
}

int Fighter::getFighterDamage() {
    return damage;
}

void Fighter::setFighterDamage(int value) {
    damage += value;
}

void Fighter::setFighterAbility() {
    if (ability) {
        ability = false;
    } else {
        ability = true;
    }
}

bool  Fighter::getFighterAbility() {

    return ability;
}

std::string Fighter::getAbilityType() {
    return abilityType;
}

void Fighter::printFighterStats() {

    std::cout << "Health: " << health << std::endl;
    std::cout << "Damage: " << damage << std::endl;
    std::cout << "Ability: " << ability << std::endl;
}
