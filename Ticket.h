//
// Created by SYED FAZIL on 25-11-2024.
//

#ifndef BUS_TICKETINGSYSTEM_TICKET_H
#define BUS_TICKETINGSYSTEM_TICKET_H

#include <string>
#include "Trip.h"

class Ticket {
private:
    std::string passengerName, discountType;
    Trip trip;
    double finalPrice;

public:
    Ticket(std::string name, std::string discount, const Trip &t);

    void calculateFinalPrice();
    double getFinalPrice() const;
    std::string getPassengerName() const;
};

#endif //BUS_TICKETINGSYSTEM_TICKET_H
