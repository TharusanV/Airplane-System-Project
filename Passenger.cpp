#include "Passenger.h"

// Default constructor
Passenger::Passenger() {
    ID = 0; // Default initialization of ID
}

// Constructor with name parameter
Passenger::Passenger(std::string name) {
    Name = name; // Initialize Name with provided name
    ID = 0; // Default initialization of ID
}

// Destructor
Passenger::~Passenger() {
    // Destructor implementation (if needed)
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
const std::vector<Booking>& Passenger::getBookings() const {
    return bookings;
}

// Function to add a new booking to the passenger's bookings
void Passenger::addBooking(Booking& flight){
    bookings.push_back(flight); // Add newBooking to the end of bookings vector
}