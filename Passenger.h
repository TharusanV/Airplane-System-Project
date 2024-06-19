#ifndef PASSENGER_H
#define PASSENGER_H

#include <string> 
#include <vector>
#include "Booking.h"

class Passenger{

  public:
    Passenger(std::string Name);

    ~Passenger();

    int getID() const;
    std::string getName() const;
    const std::vector<Booking>& getBookings();

    void addBooking(Booking& p_flight);
    void changeName(std::string p_name){this->Name = p_name;}

  private:
    static int nextID;
    int ID;
    std::string Name;
    std::vector<Booking> bookings;

};

#endif 