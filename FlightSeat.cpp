#include "FlightSeat.h"
#include "Flight.h"
#include "PlaneSeat.h"

int FlightSeat::nextID = 1;

// Constructor
FlightSeat::FlightSeat(const Flight& p_flight, const PlaneSeat& p_planeSeat, bool p_isAvailable)
    : ID(nextID++), flight(p_flight), seat(p_planeSeat), isAvailable(p_isAvailable) {
}

// Destructor
FlightSeat::~FlightSeat() {
}

int FlightSeat::getID() const {
    return ID;
}

const Flight& FlightSeat::getFlight() const {
    return flight;
}
