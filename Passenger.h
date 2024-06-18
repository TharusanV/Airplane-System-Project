#ifndef PASSENGER_H
#define PASSENGER_H

#include <string> 
#include <vector>
#include "Booking.h"

class Passenger{

  public:
    Passenger();
    Passenger(std::string Name);

    ~Passenger();

    void addBooking(Booking& flight);

    int getID() const;
    std::string getName() const;
    const std::vector<Booking>& getBookings() const;


  private:
    int ID;
    std::string Name;
    std::vector<Booking> bookings;

};

#endif 