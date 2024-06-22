#include "Booking.h"
#include "FlightSeat.h"

// Initialize the static member variable
int Booking::nextID = 1;

// Constructor
Booking::Booking(const FlightSeat& p_flightSeat)
    : ID(nextID++), flightSeat(p_flightSeat) {
 
}

// Destructor
Booking::~Booking() {
}

int Booking::getID() const {
    return ID;
}

const FlightSeat& Booking::getFlightSeat() const {
    return flightSeat;
}
