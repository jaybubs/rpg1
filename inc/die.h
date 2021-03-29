#pragma once
#include <random>

/* atm it's just a simple evenly distributed die, mostly to experiment with the builtin random library, however there's better libraries out there that would avoid having to generate this multiple times so once the code gets bigger this space will be occupied with a few different types of dice/rngs. again, for now, this does the job just fine */

class Die
{
  public:
    Die (int minv, int maxv) {
      minvalue = minv;
      maxvalue = maxv;
      std::random_device rd; //get seed
      generator = std::mt19937(rd()); //feed seed
      distribution = std::uniform_int_distribution<int>(minvalue,maxvalue);
    };

    int roll();


  private:
    int minvalue;
    int maxvalue;
    std::mt19937 generator;
    std::uniform_int_distribution<int> distribution;
};
