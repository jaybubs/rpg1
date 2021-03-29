#pragma once
#include <random>

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
