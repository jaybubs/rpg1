#include <action.h>
#include <iostream>
#include <player.h>
#include <enemy.h>
#include <die.h>


/* void Action::fight(Player& p, Enemy& e, Die& d) { */
/*   p.atk = d.roll(); */
/*   e.hp -= p.atk; */
/*   /1* make sure the enemy doesn't attack after it died *1/ */
/*   if (e.hp <= 0) { */
/*     return; */
/*   } */
/*   e.atk = d.roll(); */
/*   p.hp -= e.atk; */
/*   std::cout << "player hp: " << p.hp << std::endl; */
/*   std::cout << "enemy hp: " << e.hp << std::endl; */
/* } */

/* void Action::attack(Player& p, Enemy& e, Die& d) { */
/*   p.atk = d.roll(); */
/*   e.hp -= p.atk; */
/*   if (e.hp <= 0) { */
/*     return; */
/*   } */
/*   e.atk = d.roll(); */
/*   p.hp -= e.atk; */

/*   std::cout << "player atk: " << p.atk << std::endl; */
/*   std::cout << "player hp: " << p.hp << std::endl; */
/*   std::cout << "enemy atk: " << e.atk << std::endl; */
/*   std::cout << "enemy hp: " << e.hp << std::endl; */
/* } */

/* void Action::block(Player& p, Enemy& e, Die& d) { */
/*   /1* diminish enemy attack and maybe attack, enemy goes first now *1/ */
/*   e.atk = d.roll(); */
/*   p.hp -= (e.atk/2); */
/*   if (d.roll()>7) { */
/*     p.atk = d.roll(); */
/*     e.hp -= p.atk; */
/*     std::cout << "you rolled shit"  << std::endl; */
/*   } */

/*   std::cout << "player atk: " << p.atk << std::endl; */
/*   std::cout << "player hp: " << p.hp << std::endl; */
/*   std::cout << "enemy atk: " << (e.atk/2) << std::endl; */
/*   std::cout << "enemy hp: " << e.hp << std::endl; */
/* } */

void Action::pattack(Enemy &e, int roll) {
  e.hp -= roll;
  std::cout << "enemy hp: " << e.hp << std::endl;
}

void Action::eattack(Player &p, int roll) {
  p.hp -= roll;
  std::cout << "player hp: " << p.hp << std::endl;
}

/* template <typename Target> */
/* void Action::attack(Target &t, int roll) { */
/*   t.hp -= roll; */
/*   std::cout << typeid(t).name() << " hp: " << std::endl; */
/* } */
