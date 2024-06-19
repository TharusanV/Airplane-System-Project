#ifndef BOOKING_H
#define BOOKING_H

#include <string> 
#include <vector>
#include "Flight.h"
#include "FlightSeat.h"

class Booking{
  public:
    Booking(Flight& p_flight, FlightSeat& p_seat);

    ~Booking();

    int getID() const;
    const Flight& getFlight() const;
    const FlightSeat& getFlightSeat() const;

  private:
    static int nextID;
    int ID;
    Flight flight;
    FlightSeat seat;
    
};

#endif;