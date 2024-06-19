#include "Passenger.h"
#include "Booking.h"

#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  Passenger* p1 = new Passenger("Bob Smith");

  cout << p1->getName() << endl;
  return 0;
}