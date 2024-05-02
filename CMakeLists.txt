cmake_minimum_required(VERSION 3.26)
project(PROGR_Fightclub)

set(CMAKE_CXX_STANDARD 17)

add_executable(PROGR_Fightclub main.cpp
        Fighter.cpp
        Fighter.h
        Ability.cpp
        Ability.h
        Tank.cpp
        Tank.h
        Assasine.cpp
        Assasine.h
        Berserker.cpp
        Berserker.h
        Mage.cpp
        Mage.h)
