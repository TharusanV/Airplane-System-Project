#include "Plane.h"
#include "PlaneSeat.h"

int Plane::nextID = 1;

// Constructor
Plane::Plane(const std::string& p_name, int p_numOfFirstSeats, int p_numOfBusinessSeats, int p_numOfEconomySeats)
    : ID(nextID++), name(p_name) {

    int counter = 0;

    for (int i = 0; i < p_numOfFirstSeats; i++) {
        planeSeats.emplace_back(counter++, "F");
    }

    for (int j = 0; j < p_numOfBusinessSeats; j++) {
        planeSeats.emplace_back(counter++, "B");
    }

    for (int k = 0; k < p_numOfEconomySeats; k++) {
        planeSeats.emplace_back(counter++, "E");
    }
}

// Constructor
Plane::Plane(const std::string& p_name, std::vector<PlaneSeat> p_planeSeats)
    : ID(nextID++), name(p_name), planeSeats(std::move(p_planeSeats)) {
}

// Destructor
Plane::~Plane() {
}

int Plane::getID() const {
    return ID;
}

std::string Plane::getName() const {
    return name;
}

std::vector<PlaneSeat> Plane::getPlaneSeats() const {
    return planeSeats;
}
