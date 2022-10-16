#ifndef __DIRVECTOR_H
#define __DIRVECTOR_H

class DirVector {
public:
  DirVector( int, int );
  DirVector( int );

  // Dot product between two vectors
  int operator*( DirVector ) const;

private:

  int m_X;
  int m_Y;

};

#endif // __DIRVECTOR_H