//
// Created by SYED FAZIL on 25-11-2024.
//

#include "Ticket.h"

Ticket::Ticket(std::string name, std::string discount, const Trip &t)
        : passengerName(name), discountType(discount), trip(t), finalPrice(0.0) {}

void Ticket::calculateFinalPrice() {
    double basePrice = trip.calculatePrice();
    double discount = 0.0;

    if (discountType == "Student" || discountType == "Online")
        discount = 0.15;
    else if (discountType == "Military")
        discount = 0.10;
    else if (discountType == "Club")
        discount = 0.20;

    finalPrice = basePrice * (1 - discount);
}

double Ticket::getFinalPrice() const { return finalPrice; }
std::string Ticket::getPassengerName() const { return passengerName; }
