#include <player.h>

void Player::revive(int i)
{
  hp = i;
}

void Player::heal(int h)
{
  hp += h;
}
