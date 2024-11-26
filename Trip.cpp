//
// Created by SYED FAZIL on 25-11-2024.
//

#include "Trip.h"

Trip::Trip(std::string src, std::string dest, int dist)
        : source(src), destination(dest), distance(dist) {}

std::string Trip::getSource() const { return source; }
std::string Trip::getDestination() const { return destination; }
int Trip::getDistance() const { return distance; }

double Trip::calculatePrice() const {
    return distance * 0.5; // $0.5 per mile
}

