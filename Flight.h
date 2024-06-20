#ifndef FLIGHT_H
#define FLIGHT_H

#include <string> 
#include <vector>

class Flight{
  public:
    Flight(std::string p_time, std::string p_date, std::string p_arrival, std::string p_destination);

    ~Flight();

    int getID() const;
    std::string getTime() const;
    std::string getDate() const;
    std::string getArrival() const;
    std::string getDestination() const;

    void changeArrival(std::string p_arrival){this->arrival = p_arrival;}
    void changeDestination(std::string p_destination){this->destination = p_destination;}

  private:
    static int nextID;
    int ID;
    std::string time;
    std::string date;
    std::string arrival;
    std::string destination;
};

#endif