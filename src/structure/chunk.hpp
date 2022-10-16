#ifndef __CHUNK_H
#define __CHUNK_H

#include <vector>
#include <list>

#include "vector/dirVector.hpp"
#include "structure/pixel.hpp"

class Chunk {
public:
  Chunk( std::list<DirVector>, int );


private:
  // Direction vectors at each corner, in clockwise order starting from the top left
  std::list<DirVector> m_DirectionVectors;

  std::vector< std::vector< Pixel > > m_Pixels;

  // Size of the chunk in pixels
  int m_Size;

};


#endif  // __CHUNK_H