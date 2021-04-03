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
  int counter = 0;

  int j;
  /* Action a; */

  Player cock;





  while (!quit) { //quit app, implement menu later
    std::cout << "1. new round 2. quit" << std::endl;
    std::cout << cock.hp << std::endl;
    std::cin >> i;
    if (i == 2) {
      quit=true;
      return i;
    } else if (i == 1) {
      cock.revive(200);
      cock.dead = false;
    } else {
      std::cout << "the fuck did you press that for? bye" << std::endl;
      quit=true;
    }
    while (!cock.dead) { //while the player is alive, keep spawning new enemas

      /* spawn enemy */
      Enemy enemy;
      /* fight while enemy is alive */
      while (enemy.hp > 0) {

        std::cout << "1. attack 2. block" << std::endl;
        std::cin >> j;
        switch (j) {
          case 1:
            cock.pattack(enemy);
            enemy.eattack(cock);
              break;
          /* case 2: */
          /*   a.block(cock,enemy,dice); */
            /* break; */
          /* default: */
            /* a.fight(cock, enemy, dice); */
        }


        /* check player not dead */
        if (cock.hp <= 0) {
          cock.dead = true;
          std::cout << "ur ded"  << std::endl;
          std::cout << "u flogged " << counter << " enemas" << std::endl;
          break;
        }
        else if (enemy.hp <= 0) {
          counter++;
          std::cout << "enema number " << counter << std::endl;
          if (counter%4==0) {
            cock.heal(20);
            std::cout << "bonus 20 hp for not dying yet" << std::endl;
          }

        }
      }
    }
  }
  return 0;
}
