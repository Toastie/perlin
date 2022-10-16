#include "dirVector.hpp"
#include <math.h>


DirVector::DirVector( int x, int y ) :
  m_X( x ),
  m_Y( y )
{
}

DirVector::DirVector( int rng_value ) :
  m_X( cos( ( rng_value % 360 ) ) ),
  m_Y( sin( ( rng_value % 360 ) ) )
{
}


int DirVector::operator*( DirVector other ) const
{
  return m_X * other.m_X + m_Y * other.m_Y;
}
