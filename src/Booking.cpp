#include "Booking.h"
#include <iostream>
#include <iomanip> // For std::setprecision

using namespace std;

Booking::Booking() : bookingID(0), customerName(""), roomNumber(0), roomType(""), checkInDate(""), checkOutDate("") {}

Booking::Booking(int id, const string& name, int room, const string& roomType, const string& checkIn, const string& checkOut)
    : bookingID(id), customerName(name), roomNumber(room), roomType(roomType), checkInDate(checkIn), checkOutDate(checkOut) {}

void Booking::createBooking(int id, const string& name, int room, const string& roomType, const string& checkIn, const string& checkOut) {
    bookingID = id;
    customerName = name;
    roomNumber = room;
    this->roomType = roomType;
    checkInDate = checkIn;
    checkOutDate = checkOut;
}

void Booking::cancelBooking() {
    bookingID = 0;
    customerName = "";
    roomNumber = 0;
    roomType = "";
    checkInDate = "";
    checkOutDate = "";
}

void Booking::displayBookingDetails() const {
    cout << "Booking ID: " << bookingID << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "Room Number: " << roomNumber << endl;
    cout << "Room Type: " << roomType << endl;
    cout << "Check-In Date: " << checkInDate << endl;
    cout << "Check-Out Date: " << checkOutDate << endl;
}

void Booking::updateBooking(const string& name, const string& roomType, const string& checkIn, const string& checkOut) {
    customerName = name;
    this->roomType = roomType;
    checkInDate = checkIn;
    checkOutDate = checkOut;
}

int Booking::getBookingID() const {
    return bookingID;
}

string Booking::getCustomerName() const {
    return customerName;
}

string Booking::getRoomType() const {
    return roomType;
}

string Booking::getCheckInDate() const {
    return checkInDate;
}

string Booking::getCheckOutDate() const {
    return checkOutDate;
}

void Booking::setBookingDetails(int id, const string& name, int room, const string& roomType, const string& checkIn, const string& checkOut) {
    bookingID = id;
    customerName = name;
    roomNumber = room;
    this->roomType = roomType;
    checkInDate = checkIn;
    checkOutDate = checkOut;
}

double Booking::calculateTotalCost() const {
    // Assuming a fixed rate of $100 per night for simplicity
    double ratePerNight = 100.0;

    // Calculate the number of nights
    // You would need to parse dates and calculate the difference in a real application
    // For simplicity, assume a fixed number of nights here
    int numberOfNights = 1; // Placeholder, you should calculate based on check-in and check-out dates

    return ratePerNight * numberOfNights;
}

void Booking::printInvoice() const {
    cout << "Invoice for Booking ID: " << bookingID << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "Room Number: " << roomNumber << endl;
    cout << "Room Type: " << roomType << endl;
    cout << "Check-In Date: " << checkInDate << endl;
    cout << "Check-Out Date: " << checkOutDate << endl;
    cout << "Total Cost: $" << fixed << setprecision(2) << calculateTotalCost() << endl;
}
