#include "chunk.hpp"

#include <iostream>

int count;

Chunk::Chunk( std::list<DirVector> directonVectors, int size ) :
  m_DirectionVectors{ directonVectors }
{
  std::cout << "Chunk Created: " << (count++) << std::endl;

  // Create a Matrix of Pixels
  for ( int i = 0; i < size; i++ ){
    m_Pixels.push_back( std::vector< Pixel >() );
    for (int j = 0; j < size; j++)
    {
      // List of corner vectors for the pixel
      m_Pixels[i].push_back( Pixel( j, i, std::list<DirVector>{ DirVector( i, j ), DirVector( (size - i), j ),
                                                                DirVector( i, (size - j) ) , DirVector( (size - i), (size - j) )  } ) );
    }
  }

};