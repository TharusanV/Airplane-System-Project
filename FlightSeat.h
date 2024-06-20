#ifndef FLIGHTSEAT_H
#define FLIGHTSEAT_H

#include <string> 

class FlightSeat{
  public:
    FlightSeat(std::string p_seatNumber);

    ~FlightSeat();

    int getID() const;
    std::string getSeatNumber() const;

  private:
    static int nextID;
    int ID;
    std::string seatNumber;
};

#endif