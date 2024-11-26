//
// Created by SYED FAZIL on 25-11-2024.
//

#ifndef BUS_TICKETINGSYSTEM_TRIP_H
#define BUS_TICKETINGSYSTEM_TRIP_H

#include <string>

class Trip {
private:
    std::string source, destination;
    int distance;

public:
    Trip(std::string src, std::string dest, int dist);

    std::string getSource() const;
    std::string getDestination() const;
    int getDistance() const;

    double calculatePrice() const;
};

#endif //BUS_TICKETINGSYSTEM_TRIP_H
