#ifndef BOOKING_H
#define BOOKING_H

#include <string>

class FlightSeat;

class Booking {
public:
    Booking(const FlightSeat& p_flightSeat);
    ~Booking();

    int getID() const;
    
    const FlightSeat& getFlightSeat() const;

private:
    static int nextID;
    int ID;
    FlightSeat flightSeat;
};

#endif
