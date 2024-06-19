#include "Booking.h"

// Initialize the static member variable
int Booking::nextID = 1;

// Constructor
Booking::Booking(Flight& p_flight, FlightSeat& p_seat)
    : ID(nextID++), flight(p_flight), seat(p_seat) {
    // Constructor body (if needed)
}

// Destructor
Booking::~Booking() {
    // Destructor implementation (if needed)
}

// Getter for ID
int Booking::getID() const {
    return ID;
}

// Getter for Flight (returns a reference)
const Flight& Booking::getFlight() const {
    return flight;
}

// Getter for FlightSeat (returns a reference)
const FlightSeat& Booking::getFlightSeat() const {
    return seat;
}

