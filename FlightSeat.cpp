#include "FlightSeat.h"

int FlightSeat::nextID = 1;

// Constructor
FlightSeat::FlightSeat(std::string p_seatNumber)
    : ID(nextID++), seatNumber(p_seatNumber){
    // Constructor body (if needed)
}

// Destructor
FlightSeat::~FlightSeat() {
    // Destructor implementation (if needed)
}

int FlightSeat::getID() const {
    return ID;
}

std::string FlightSeat::getSeatNumber() const {
    return seatNumber;
}
