#pragma once
#include <die.h>


class Action;
class Player;
class Die;

class Enemy {
  public:
    Enemy () :
      atkdice(1,10) {
        Die hpdice(30,50);
        hp = hpdice.roll();
      };

    Action *a;
    int atk;
    int hp;
    Die atkdice;

    void eattack(Player &p);
};

