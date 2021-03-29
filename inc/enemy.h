#pragma once
#include <die.h>



class Enemy {
  public:
    Enemy () {
    Die dice(30,50);
      hp = dice.roll();
    };

    int atk;
    int hp;
};
