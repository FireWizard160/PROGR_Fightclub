//
// Created by lukas on 02.05.2024.
//

#ifndef PROGR_FIGHTCLUB_FIGHTER_H
#define PROGR_FIGHTCLUB_FIGHTER_H
#include <string>


class Fighter {
public:
    int getFighterHP();
    void setFighterHP(int value);

    int getFighterDamage ();
    void setFighterDamage (int value);

    bool getFighterAbility();
    void setFighterAbility();

    std::string getAbilityType();

    void printFighterStats();

    Fighter();

protected:
    int damage = 0;
    int health = 0;
    bool ability = true;
    std::string name = "";
    std::string abilityType;

private:
};


#endif //PROGR_FIGHTCLUB_FIGHTER_H
