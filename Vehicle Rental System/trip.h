#ifndef trip_h
#define trip_h
#include "date.h"
#include "storable.cpp"
#include "user.h"
#include "vehicle.h"
#include <string>
using namespace std;
class Trip : public Storable{
    private:
        const Vehicle * vehicle;
        const User * user;
        
}
#endif