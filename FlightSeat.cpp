#include "FlightSeat.h"
#include "Flight.h"

int FlightSeat::nextID = 1;

// Constructor
FlightSeat::FlightSeat(const Flight& p_flight, std::string p_seatNumber)
    : ID(nextID++), flight(p_flight), seatNumber(p_seatNumber){
    
}

// Destructor
FlightSeat::~FlightSeat() {
   
}

int FlightSeat::getID() const {
    return ID;
}

const Flight& FlightSeat::getFlight() const{
    return flight;
}

std::string FlightSeat::getSeatNumber() const {
    return seatNumber;
}
