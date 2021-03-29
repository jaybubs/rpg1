#pragma once

class Player
{
public:
  int atk;
  int hp;
  bool dead = true;

  void revive(int i);
};
