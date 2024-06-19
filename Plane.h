#ifndef PLANE_H
#define PLANE_H

#include <string> 
#include <vector>

class Plane{
  public:
    Plane();

    ~Plane();

    int getID() const;

  private:
    static int nextID;
    int ID;

};

#endif;