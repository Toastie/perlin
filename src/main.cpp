#include <random>
#include <iostream>

#include "structure/world.hpp"


int main ( void ) {

  int seed = 1234;
  std::mt19937 rng( seed );


  World world( rng, 10, 10, 10 );

  return 0;
}