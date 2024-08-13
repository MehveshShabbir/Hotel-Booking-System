#ifndef HOTELMANAGEMENT_H
#define HOTELMANAGEMENT_H

using namespace std;

#include <string>

class HotelManagement {
private:
    int totalRooms;
    int bookedRooms;
    double pricePerRoom;
    string hotelName;

public:
    HotelManagement();
    void checkAvailability();
    void bookRoom();
    void manageDetails();
};

#endif
