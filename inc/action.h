#pragma once
#include <iostream>

/* actions may often depend on other classes thru composition */
class Player;
class Enemy;
class Die;

class Action
{
public:
  /* simple PvE loop */
  /* void attack(Player& p, Enemy& e, Die& d); */
  /* void block(Player& p, Enemy& e, Die& d); */

void pattack(Enemy &e, int roll);
void eattack(Player &p, int roll);

template <typename Target>
void attack(Target &t, int roll) {
  t.hp -= roll;
  std::cout << typeid(t).name() << " hp: " << t.hp << std::endl;
}

private:

};



