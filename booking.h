#ifndef BOOKING_H
#define BOOKING_H

#include "FlightSeat.h"

class FlightSeat;

class Booking {
public:
    Booking(const FlightSeat& p_flightSeat); 
    ~Booking();

    int getID() const;
    const FlightSeat& getFlightSeat() const;  
    //void changeFlightSeat(const FlightSeat& newFlightSeat); 

private:
    static int nextID;
    int ID;
    FlightSeat flightSeat;  
};

#endif
