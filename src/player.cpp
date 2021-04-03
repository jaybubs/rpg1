#include <player.h>
#include <action.h>
#include <enemy.h>
#include <die.h>

Action a;

Die dice(1,10);

void Player::revive(int i)
{
  hp = i;
}

void Player::heal(int h)
{
  hp += h;
}

void Player::pattack(Enemy &e)
{
  //rolla random number
  /* a.pattack(e, dice.roll()); */
  a.attack(e, dice.roll());
}
