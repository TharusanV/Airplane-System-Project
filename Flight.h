#ifndef FLIGHT_H
#define FLIGHT_H

#include <string> 
#include <vector>

class FlightSeat;
class Plane;

class Flight{
  public:
    Flight(Plane& p_plane, std::string p_time, std::string p_date, std::string p_arrival, std::string p_destination);
    ~Flight();

    int getID() const;

    std::string getArrival() const;
    void changeArrival(std::string p_arrival);

    std::string getDestination() const;
    void changeDestination(std::string p_destination);

    std::string getTime() const;
    std::string getDate() const;

  private:
    static int nextID;
    int ID;
    
    Plane plane;
    std::vector<FlightSeat> fightSeats;

    std::string time;
    std::string date;
    std::string arrival;
    std::string destination;
};

#endif