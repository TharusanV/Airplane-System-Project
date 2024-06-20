#include "Passenger.h"
#include "Booking.h"
#include "Flight.h"
#include "FlightSeat.h"

#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  //Passenger* p1 = new Passenger("Bob Smith");
  Passenger p1("Bob Smith");

  Flight f1("18:00", "20/06/2024", "London", "Rome");

  FlightSeat fs1("A5");

  Booking b1(p1, f1, fs1);

  p1.addBooking(b1);

  //cout << p1->getName() << endl;
  cout << p1.getName() << endl;

  const std::vector<Booking>& bookings = p1.getBookings();
  const Booking& firstBooking = bookings[0];
  cout << firstBooking.getID() << endl;
  
  return 0;
}