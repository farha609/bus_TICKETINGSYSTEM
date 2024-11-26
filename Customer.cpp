//
// Created by SYED FAZIL on 25-11-2024.
//

#include "Customer.h"

Customer::Customer(std::string n, std::string e) : name(n), email(e) {}

std::string Customer::getName() const { return name; }
std::string Customer::getEmail() const { return email; }
