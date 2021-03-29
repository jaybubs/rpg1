#pragma once
#include <die.h>



class Enemy {
  public:
    Enemy () {
    Die hpdice(30,50);
      hp = hpdice.roll();
    };

    int atk;
    int hp;
};
