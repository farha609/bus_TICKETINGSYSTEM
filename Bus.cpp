//
// Created by SYED FAZIL on 25-11-2024.
//

#include "Bus.h"

Bus::Bus(std::string drv, std::string mdl, int maxTrav)
        : driver(drv), model(mdl), maxTravelers(maxTrav) {}

std::string Bus::getDriver() const { return driver; }
std::string Bus::getModel() const { return model; }
int Bus::getMaxTravelers() const { return maxTravelers; }
