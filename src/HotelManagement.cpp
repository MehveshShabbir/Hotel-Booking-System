#include "HotelManagement.h"
#include <iostream>
using namespace std; 

HotelManagement::HotelManagement() {
    totalRooms = 100;
    bookedRooms = 0;
    pricePerRoom = 150.0;
    hotelName = "Grand Hotel";
}

void HotelManagement::checkAvailability() {
    cout << "Total rooms: " << totalRooms << endl;
    cout << "Booked rooms: " << bookedRooms << endl;
    cout << "Available rooms: " << totalRooms - bookedRooms << endl;
}

void HotelManagement::bookRoom() {
    if (bookedRooms < totalRooms) {
        bookedRooms++;
        cout << "Room booked successfully!" << endl;
    } else {
        cout << "No rooms available!" << endl;
    }
}

void HotelManagement::manageDetails() {
    cout << "Hotel Name: " << hotelName << endl;
    cout << "Price per Room: $" << pricePerRoom << endl;
    cout << "Total Rooms: " << totalRooms << endl;
    cout << "Booked Rooms: " << bookedRooms << endl;
}
