#pragma once

/* actions may often depend on other classes thru composition */
class Player;
class Enemy;
class Die;

class Action
{
public:
  /* simple PvE loop */
  void fight(Player& p, Enemy& e, Die& d);

private:

};



