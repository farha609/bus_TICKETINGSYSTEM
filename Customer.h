//
// Created by SYED FAZIL on 25-11-2024.
//

#ifndef BUS_TICKETINGSYSTEM_CUSTOMER_H
#define BUS_TICKETINGSYSTEM_CUSTOMER_H

#include <string>

class Customer {
private:
    std::string name;
    std::string email;

public:
    Customer(std::string n, std::string e);

    std::string getName() const;
    std::string getEmail() const;
};

#endif //BUS_TICKETINGSYSTEM_CUSTOMER_H
