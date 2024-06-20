#include "Booking.h"
#include "Passenger.h"

// Initialize the static member variable
int Booking::nextID = 1;

// Constructor
Booking::Booking(Passenger& p_passenger, const Flight& p_flight, const FlightSeat& p_seat)
    : ID(nextID++), passenger(p_passenger), flight(p_flight), seat(p_seat) {
    // Constructor body (if needed)
}

// Destructor
Booking::~Booking() {
}

// Getter for ID
int Booking::getID() const {
    return ID;
}

// Getter for Flight (returns a const reference)
const Flight& Booking::getFlight() const {
    return flight;
}

// Getter for FlightSeat (returns a const reference)
const FlightSeat& Booking::getFlightSeat() const {
    return seat;
}
