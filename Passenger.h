#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>
#include <vector>

// Forward declaration of Booking
class Booking;

class Passenger {
public:
    Passenger(const std::string& name);
    ~Passenger();

    int getID() const;
    std::string getName() const;
    const std::vector<Booking>& getBookings() const;

    void addBooking(Booking& p_flight);
    void changeName(const std::string& p_name);

private:
    static int nextID;
    int ID;
    std::string name;
    std::vector<Booking> bookings;
};

#endif
