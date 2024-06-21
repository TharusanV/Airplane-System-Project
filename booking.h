#ifndef BOOKING_H
#define BOOKING_H

#include <string>

// Forward declaration of Passenger
class Passenger;

class Booking {
public:
    Booking(Passenger& p_passenger, const Flight& p_flight, const FlightSeat& p_seat);
    ~Booking();

    int getID() const;
    const Passenger& getPassenger() const;
    const Flight& getFlight() const;
    const FlightSeat& getFlightSeat() const;

private:
    static int nextID;
    int ID;
    Passenger passenger;
    Flight flight;
    FlightSeat seat;
};

#endif
