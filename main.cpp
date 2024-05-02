#include <iostream>
#include "Assasine.h"
#include "Mage.h"
#include "Berserker.h"
#include "Tank.h"
#include <string>

// meine Abilitys sind Characterklassen sprich man kann am Anfang statt abilitys einen Charactertype wählen

int main() {
    Fighter fighter1;
    Fighter fighter2;

    while (true) {
        std::cout << "Choose your Character:" << std::endl;
        std::cout << "(1) Berserker [100 HP] [20 Damage]" << std::endl;
        std::cout << "(2) Tank [200 HP] [10 Damage]" << std::endl;
        std::cout << "(3) Assasine [50 HP] [35 Damage]" << std::endl;
        std::cout << "(4) Mage [65 HP] [25 Damage]" << std::endl;

        int userinput = 0;
        std::cin >> userinput;


        switch (userinput) {
            case 1: {
                Berserker berserker = Berserker();
                fighter1 = berserker;
                Mage mage = Mage();
                fighter2 = mage;
            }
                break;

            case 2: {
                Tank tank = Tank();
                fighter1 = tank;
                Berserker berserker = Berserker();
                fighter2 = berserker;
            }
                break;

            case 3: {
                Assasine assasine = Assasine();
                fighter1 = assasine;
                Berserker berserker = Berserker();
                fighter2 = berserker;
            }
                break;
            case 4: {
                Mage mage = Mage();
                fighter1 = mage;
                Tank tank = Tank();
                fighter2 = tank;
            }
                break;

            default: {
                std::cout << "invalid Option" << std::endl;
                continue;
            }

        }
        break;
    }
    char userinput;


    while (true) {
        std::cout << "YOU:" << std::endl;
        fighter1.printFighterStats();

        std::cout << "ENEMY:" << std::endl;
        fighter2.printFighterStats();

        if (fighter1.getFighterHP() < 0) {
            std::cout << "You lose" << std::endl;
            return 0;
        }

        if (fighter2.getFighterHP() < 0) {
            std::cout << "You win" << std::endl;
            return 0;
        }

        std::cout << "PRESS (a) to attack" << std::endl;
        std::cout << "PRESS (s) for special ability" << std::endl;
        std::cin >> userinput;

        if (userinput == 'a') {
            fighter2.setFighterHP(-fighter1.getFighterDamage());

        } else if (userinput == 's') {

            if (fighter1.getAbilityType() == "crit") {
                fighter2.setFighterHP(-(fighter1.getFighterDamage() * 2));
                fighter1.setFighterAbility();

            } else if (fighter1.getAbilityType() == "heal") {

                fighter1.setFighterHP(40);
                fighter1.setFighterAbility();

            } else if (fighter1.getAbilityType() == "rage") {

                fighter1.setFighterHP(-30);
                fighter1.setFighterDamage(20);
                fighter1.setFighterAbility();

            } else if (fighter1.getAbilityType() == "resistance") {
                std::cout << "Attack dodged" << std::endl;
                fighter1.setFighterAbility();
                continue;
            } else {
                std::cout << "invalid move" << std::endl;
                continue;
            }

        }

        if (fighter2.getFighterAbility()){
            fighter2.setFighterAbility();

            if (fighter2.getAbilityType() == "crit") {
                fighter1.setFighterHP(-(fighter2.getFighterDamage() * 2));
                fighter2.setFighterAbility();

            } else if (fighter2.getAbilityType() == "heal") {

                fighter2.setFighterHP(40);
                fighter2.setFighterAbility();

            } else if (fighter2.getAbilityType() == "rage") {

                fighter2.setFighterHP(-30);
                fighter2.setFighterDamage(20);
                fighter2.setFighterAbility();

            } else if (fighter2.getAbilityType() == "resistance") {
                fighter1.setFighterAbility();

            }
        } else {

            fighter1.setFighterHP(-fighter2.getFighterDamage());
        }




    }
}