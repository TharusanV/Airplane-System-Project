#include "Passenger.h"

int Passenger::nextID = 1;

// Constructor with name parameter
Passenger::Passenger(std::string name) 
    :ID(nextID++),Name(name){
}

// Destructor
Passenger::~Passenger() {
    
}

// Getter function for ID
int Passenger::getID() const {
    return ID;
}

// Getter function for Name
std::string Passenger::getName() const {
    return Name;
}

// Getter function for bookings (returns a reference)
const std::vector<Booking>& Passenger::getBookings() {
    return bookings;
}

// Function to add a new booking to the passenger's bookings
void Passenger::addBooking(Booking& p_flight){
    bookings.push_back(p_flight); 
}