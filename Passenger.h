#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>
#include <vector>
#include "Booking.h"

class Booking;

class Passenger {
public:
    Passenger(const std::string& name);
    ~Passenger();

    int getID() const;
    
    std::string getName() const;
    void changeName(const std::string& p_name);

    const std::vector<Booking>& getBookings() const;
    void addBooking(Booking& p_flight);

private:
    static int nextID;
    int ID;
    std::string name;
    std::vector<Booking> bookings;
};

#endif
