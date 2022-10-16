#ifndef __WORLD_H
#define __WORLD_H

// STD includes
#include <list>

// Local includes
#include "chunk.hpp"

class World
{
public:
    World();


private:

  // A World is divided into a grid of Chunks
  // Each Chunk is a 2D array of Pixels
  std::list<Chunk> m_Chunks;


};



#endif // __WORLD_H