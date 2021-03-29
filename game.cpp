#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <die.h>
#include <player.h>
#include <enemy.h>
#include <action.h>




int main()
{
  bool quit = false;
  int i;
  int counter;

  Action a;

  Player cock;

  Die dice(1,10);




  while (!quit) { //quit app, implement menu later
    std::cout << "1. new round 2. quit" << std::endl;
    std::cout << cock.hp << std::endl;
    std::cin >> i;
    if (i == 2) {
      quit=true;
      return i;
    }

    if (i == 1) {
    cock.revive(200);
    cock.dead = false;
    }
    while (!cock.dead) { //while the player is alive, keep spawning new enemas

      /* spawn enemy */
      Enemy enemy;
      /* fight while enemy is alive */
      while (enemy.hp > 0) {

        a.fight(cock, enemy, dice);


        /* check player not dead */
        if (cock.hp <= 0) {
          cock.dead = true;
          std::cout << "ur ded"  << std::endl;
          std::cout << "u flogged " << counter << " enemas" << std::endl;
          break;
        }
        else if (enemy.hp <= 0) {
          std::cout << "enema ded" << std::endl;
          counter++;

        }
      }
    }
  }
  return 0;
}
