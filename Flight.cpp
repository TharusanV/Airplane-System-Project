#include "Flight.h"
#include "FlightSeat.h"
#include "PlaneSeat.h"

int Flight::nextID = 1;

// Constructor
Flight::Flight(const Plane& p_plane)
    : ID(nextID++), plane(p_plane) {

    for (const PlaneSeat& seat : plane.getPlaneSeats()) {
        allFlightSeats.emplace_back(*this, seat, true); 
    }
}

// Destructor
Flight::~Flight() {
}

int Flight::getID() const {
    return ID;
}
