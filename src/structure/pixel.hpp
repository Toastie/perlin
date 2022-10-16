#ifndef __PIXEL_H
#define __PIXEL_H

#include <list>

#include "vector/dirVector.hpp"

class Pixel {
public:
  // X,Y coordinates of the pixel within the Chunk followed by a list of the corner vectors
  Pixel( int, int, std::list<DirVector> );

private:

  // Coordinates within the Chunk
  int m_X;
  int m_Y;

  // Perlin Noise value regarding one of the corners, clockwise from top left
  double m_Value[4];

  // List of Vectors pointing to the corners of the Chunk, in clockwise order starting from the top left
  std::list<DirVector> m_CornerVectors;

};



#endif // __PIXEL_H