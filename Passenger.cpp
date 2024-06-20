#include "Passenger.h"
#include "Booking.h"

// Initialize the static member variable
int Passenger::nextID = 1;

// Constructor with name parameter
Passenger::Passenger(const std::string& name) 
    : ID(nextID++), name(name) {
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
    return name;
}

// Getter function for bookings (returns a const reference)
const std::vector<Booking>& Passenger::getBookings() const {
    return bookings;
}

// Function to add a new booking to the passenger's bookings
void Passenger::addBooking(Booking& p_flight) {
    bookings.push_back(p_flight);
}

// Function to change the name of the passenger
void Passenger::changeName(const std::string& p_name) {
    name = p_name;
}
