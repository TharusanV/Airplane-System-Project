#include "Booking.h"

int Booking::nextID = 1;

Booking::Booking(const FlightSeat& p_flightSeat)
    : ID(nextID++), flightSeat(p_flightSeat)  
{
}

Booking::~Booking() {
   
}

int Booking::getID() const {
    return ID;
}

const FlightSeat& Booking::getFlightSeat() const {
    return flightSeat;
}

/*
void Booking::changeFlightSeat(const FlightSeat& newFlightSeat) {
    flightSeat = newFlightSeat;  
}
*/
