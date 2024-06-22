#ifndef FLIGHTSEAT_H
#define FLIGHTSEAT_H

#include <string> 

class Flight;

class FlightSeat{
  public:
    FlightSeat(const Flight& p_flight, std::string p_seatNumber);
    ~FlightSeat();

    int getID() const;
    const Flight& getFlight() const;
    std::string getSeatNumber() const;
    

  private:
    static int nextID;
    int ID;
    Flight flight;
    std::string seatNumber;
};

#endif