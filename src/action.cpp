#include <action.h>
#include <iostream>
#include <player.h>
#include <enemy.h>
#include <die.h>


void Action::fight(Player& p, Enemy& e, Die& d) {
  p.atk = d.roll();
  e.hp -= p.atk;
  /* make sure the enemy doesn't attack after it died */
  if (e.hp <= 0) {
    return;
  }
  e.atk = d.roll();
  p.hp -= e.atk;
  std::cout << "player hp: " << p.hp << std::endl;
  std::cout << "enemy hp: " << e.hp << std::endl;
}
