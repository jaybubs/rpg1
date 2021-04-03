#pragma once

class Action;
class Enemy;

class Player
{
  public:
    int atk;
    int hp;
    bool dead = true;

    /* revive also functions to give player the inital hp cos why not, the other option would be to give the player hp in the constructor and just reconstruct a new objet, may be worth checking out later what's faster, for now this should do just fine honestly */
    void revive(int i);

    /* unlike revive above, this function should strictly _add_ to the hp, not reset it */
    void heal(int h);
    /* get action from actions */
    void pattack(Enemy& e);
};
