#ifndef PLANE_H
#define PLANE_H

#include <string> 
#include <vector>

#include "Flight.h"
#include "PlaneSeat.h"

class Plane{
  public:
    Plane();

    ~Plane();

    int getID() const;

  private:
    static int nextID;
    int ID;
    std::vector<Flight> flights;
    std::vector<PlaneSeat> planeSeats;
};

#endif