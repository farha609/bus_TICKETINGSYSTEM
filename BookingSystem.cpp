//
// Created by SYED FAZIL on 25-11-2024.
//

#include "BookingSystem.h"
#include <iostream>
#include <algorithm>

void BookingSystem::addTrip(const Trip &trip) {
    trips.push_back(trip);
    std::cout << "Trip added successfully.\n";
}

void BookingSystem::removeTrip(const std::string &source, const std::string &destination) {
    trips.erase(std::remove_if(trips.begin(), trips.end(), [&](const Trip &t) {
        return t.getSource() == source && t.getDestination() == destination;
    }), trips.end());
    std::cout << "Trip removed successfully.\n";
}

void BookingSystem::bookTicket(const Customer &customer, const std::string &discountType, const Trip &trip) {
    Ticket ticket(customer.getName(), discountType, trip);
    ticket.calculateFinalPrice();
    tickets.push_back(ticket);
    std::cout << "Ticket booked for " << customer.getName() << ". Final price: $" << ticket.getFinalPrice() << "\n";
}

void BookingSystem::cancelTicket(const std::string &customerName) {
    tickets.erase(std::remove_if(tickets.begin(), tickets.end(), [&](const Ticket &t) {
        return t.getPassengerName() == customerName;
    }), tickets.end());
    std::cout << "Ticket cancelled for " << customerName << ".\n";
}

void BookingSystem::displayTrips() const {
    if (trips.empty()) {
        std::cout << "No trips available.\n";
        return;
    }

    for (const auto &trip : trips) {
        std::cout << "Trip: " << trip.getSource() << " to " << trip.getDestination()
                  << " | Distance: " << trip.getDistance() << " miles\n";
    }
}
