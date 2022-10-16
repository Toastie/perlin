#ifndef __WORLD_H
#define __WORLD_H

// STD includes
#include <vector>
#include <random>

// Local includes
#include "chunk.hpp"
#include "vector/dirVector.hpp"

class World
{
public:
    World( std::mt19937 &, int , int, int );


private:

  // A World is divided into a grid of Chunks
  std::vector< std::vector< Chunk > > m_Chunks;

  // Direction vecors for each Corner
  std::vector< std::vector< DirVector > > m_DirVectors;

  // RNG Source
  std::mt19937 & m_RNG;

};



#endif // __WORLD_H