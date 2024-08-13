#ifndef BOOKING_H
#define BOOKING_H

#include <iostream>
#include <string>

using namespace std;

class Booking {
private:
    int bookingID;
    string customerName;
    int roomNumber;
    string roomType;
    string checkInDate;
    string checkOutDate;

public:
    Booking();
    Booking(int id, const string& name, int room, const string& roomType, const string& checkIn, const string& checkOut);
    void createBooking(int id, const string& name, int room, const string& roomType, const string& checkIn, const string& checkOut);
    void cancelBooking();
    void displayBookingDetails() const;
    void updateBooking(const string& name, const string& roomType, const string& checkIn, const string& checkOut);
    
    int getBookingID() const;
    string getCustomerName() const;
    string getRoomType() const;
    string getCheckInDate() const;
    string getCheckOutDate() const;
    
   void setBookingDetails(int id, const string& name, int room, const string& roomType, const string& checkIn, const string& checkOut);
    void getBookingDetails() const;
    
    double calculateTotalCost() const; 
    void printInvoice() const; 
};

#endif
