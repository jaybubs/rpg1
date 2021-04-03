#include <iostream>
#include <player.h>
#include <action.h>
#include <enemy.h>
#include <die.h>



void Enemy::eattack(Player &p)
{
  //rolla random number
  a->eattack(p, atkdice.roll());
}
