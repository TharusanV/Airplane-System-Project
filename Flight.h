#ifndef FLIGHT_H
#define FLIGHT_H

#include <string>
#include <vector>
#include "Plane.h"
#include "PlaneSeat.h" 

class FlightSeat;
class Plane;

class Flight {
public:
    Flight(const Plane& p_plane);
    ~Flight();

    int getID() const;

private:
    static int nextID;
    int ID;
    Plane plane;
    std::vector<FlightSeat> allFlightSeats;
};

#endif // FLIGHT_H
