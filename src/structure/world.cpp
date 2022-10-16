#include "world.hpp"


World::World( std::mt19937& rng, int x, int y, int size ) :
  m_RNG( rng )
{
  // x and y are the worlds dimensions in chunks

  // Create a Matrix of Direction Vectors
  // These should be 1 larger than the chunk matrix
  for ( int i = 0; i < ( y + 1 ); i++ ){
    m_DirVectors.push_back( std::vector< DirVector >() );
    for (int j = 0; j < ( x + 1 ); j++)
    {
      m_DirVectors[i].push_back( DirVector( rng() ) );
    }
  }

  // Create a Matrix of Chunks
  for ( int i = 0; i < y; i++ ){
    m_Chunks.push_back( std::vector< Chunk >() );
    for (int j = 0; j < x; j++)
    {
      m_Chunks[i].push_back( Chunk( std::list{ m_DirVectors[i][j], m_DirVectors[i][j+1],
                                               m_DirVectors[i+1][j], m_DirVectors[i+1][j+1] },
                                    size ) );
    }
  }


};
