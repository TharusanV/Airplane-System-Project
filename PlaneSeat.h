#ifndef PLANESEAT_H
#define PLANESEAT_H

#include <string> 
#include <vector>

class PlaneSeat{
  public:
    PlaneSeat();

    ~PlaneSeat();

    int getID() const;

  private:
    static int nextID;
    int ID;

};

#endif