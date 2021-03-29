#include <die.h>

int Die::roll()
  {
    return distribution(generator);
  }
