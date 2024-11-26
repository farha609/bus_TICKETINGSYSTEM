//
// Created by SYED FAZIL on 25-11-2024.
//

#ifndef BUS_TICKETINGSYSTEM_BOOKINGSYSTEM_H
#define BUS_TICKETINGSYSTEM_BOOKINGSYSTEM_H

#include <vector>
#include <string>
#include "Trip.h"
#include "Ticket.h"
#include "Bus.h"
#include "Customer.h"

class BookingSystem {
private:
    std::vector<Trip> trips;
    std::vector<Ticket> tickets;
    std::vector<Customer> customers;

public:
    void addTrip(const Trip &trip);
    void removeTrip(const std::string &source, const std::string &destination);
    void bookTicket(const Customer &customer, const std::string &discountType, const Trip &trip);
    void cancelTicket(const std::string &customerName);
    void displayTrips() const;
};

#endif //BUS_TICKETINGSYSTEM_BOOKINGSYSTEM_H
