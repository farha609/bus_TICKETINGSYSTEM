//
// Created by SYED FAZIL on 25-11-2024.
//

#ifndef BUS_TICKETINGSYSTEM_BUS_H
#define BUS_TICKETINGSYSTEM_BUS_H

#include <string>

class Bus {
private:
    std::string driver, model;
    int maxTravelers;

public:
    Bus(std::string drv, std::string mdl, int maxTrav);

    std::string getDriver() const;
    std::string getModel() const;
    int getMaxTravelers() const;
};

#endif //BUS_TICKETINGSYSTEM_BUS_H
