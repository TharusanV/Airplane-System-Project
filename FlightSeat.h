#ifndef FLIGHTSEAT_H
#define FLIGHTSEAT_H

#include <string>
#include "PlaneSeat.h"

class Flight;
class PlaneSeat;

class FlightSeat {
public:
    FlightSeat(const Flight& p_flight, const PlaneSeat& p_planeSeat, bool p_isAvailable);
    ~FlightSeat();

    int getID() const;
    const Flight& getFlight() const;

private:
    static int nextID;
    int ID;
    const Flight& flight;    // Use a reference or pointer to avoid incomplete type issues
    PlaneSeat seat;
    bool isAvailable;
};

#endif // FLIGHTSEAT_H
