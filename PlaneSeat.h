#ifndef PLANESEAT_H
#define PLANESEAT_H

#include <string>

class PlaneSeat {
public:
    PlaneSeat(int p_seatNumber, const std::string& p_seatClass);
    ~PlaneSeat();

    int getSeatNumber() const;
    std::string getSeatClass() const;

private:
    int seatNumber;
    std::string seatClass;
};

#endif // PLANESEAT_H
