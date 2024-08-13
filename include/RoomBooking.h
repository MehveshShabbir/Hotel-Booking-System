#ifndef ROOMBOOKING_H
#define ROOMBOOKING_H
#include "Booking.h"

using namespace std;

class RoomBooking : public Booking {
private:
    string roomType;
    double roomRate;

public:
    void setRoomDetails(string type, double rate);
    double calculateTotalCost() override; // Override for polymorphism
    void printInvoice() override; // Override for polymorphism
};

#endif
