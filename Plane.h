#ifndef PLANE_H
#define PLANE_H

#include <string>
#include <vector>

class PlaneSeat;

class Plane {
public:
    Plane(const std::string& p_name, int p_numOfFirstSeats, int p_numOfBusinessSeats, int p_numOfEconomySeats);
    Plane(const std::string& p_name, std::vector<PlaneSeat> p_planeSeats);
    ~Plane();

    int getID() const;
    std::string getName() const;
    std::vector<PlaneSeat> getPlaneSeats() const;

private:
    static int nextID;
    int ID;
    std::string name;
    std::vector<PlaneSeat> planeSeats;
};

#endif // PLANE_H
