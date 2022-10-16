#include "pixel.hpp"
#include "vector/dirVector.hpp"

Pixel::Pixel( int x, int y, std::list<DirVector> cVec ) :
  m_X( x ),
  m_Y( y ),
  m_CornerVectors( cVec )
{

};