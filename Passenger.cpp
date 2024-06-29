#include "Passenger.h"

// Initialize the static member variable
int Passenger::nextID = 1;

Passenger::Passenger(const std::string& name) 
    : ID(nextID++), name(name) {
}

// Destructor
Passenger::~Passenger() {
}

int Passenger::getID() const {
    return ID;
}

std::string Passenger::getName() const {
    return name;
}

void Passenger::changeName(const std::string& p_name){
    name = p_name;
}


const std::vector<Booking>& Passenger::getBookings() const {
    return bookings;
}

void Passenger::addBooking(Booking& p_flight) {
    bookings.push_back(p_flight);
}
