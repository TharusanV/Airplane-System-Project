#include "Flight.h"

int Flight::nextID = 1;

// Constructor
Flight::Flight(Booking& p_booking, Plane& p_plane, std::string p_time, std::string p_date, std::string p_arrival, std::string p_destination)
    : ID(nextID++), booking(p_booking), plane(p_plane), date(p_date), arrival(p_arrival), destination(p_destination){

}

// Destructor
Flight::~Flight() {

}

int Flight::getID() const {
    return ID;
}

std::string Flight::getTime() const {
    return time;
}

std::string Flight::getDate() const {
    return date;
}

std::string Flight::getArrival() const {
    return arrival;
}

std::string Flight::getDestination() const {
    return destination;
}