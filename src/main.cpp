#include <iostream>
#include "HotelManagement.h" 
#include "Booking.h"

int main() {
   HotelManagement hotel;

    hotel.checkAvailability();
    hotel.bookRoom();
    hotel.manageDetails();

    Booking booking;
    booking.createBooking(1, "John Doe", 101, "Deluxe", "2024-08-15", "2024-08-20");
    booking.displayBookingDetails();
    booking.updateBooking("Jane Smith", "Suite", "2024-08-16", "2024-08-21");
    booking.displayBookingDetails();
    booking.cancelBooking();

    return 0;
}