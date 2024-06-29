#include "PlaneSeat.h"

// Constructor
PlaneSeat::PlaneSeat(int p_seatNumber, const std::string& p_seatClass)
    : seatNumber(p_seatNumber), seatClass(p_seatClass) {
}

// Destructor
PlaneSeat::~PlaneSeat() {
}

int PlaneSeat::getSeatNumber() const {
    return seatNumber;
}

std::string PlaneSeat::getSeatClass() const {
    return seatClass;
}
