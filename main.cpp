//
// Created by SYED FAZIL on 25-11-2024.
//

#include <iostream>
#include "BookingSystem.h"

void displayMenu() {
    std::cout << "\n--- Bus Ticketing System ---\n";
    std::cout << "1. Add a Trip\n";
    std::cout << "2. Remove a Trip\n";
    std::cout << "3. Book a Ticket\n";
    std::cout << "4. Cancel a Ticket\n";
    std::cout << "5. Display All Trips\n";
    std::cout << "6. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    BookingSystem system;
    int choice;

    while (true) {
        displayMenu();
        std::cin >> choice;

        if (choice == 6) break;

        switch (choice) {
            case 1: {
                std::string source, destination;
                int distance;
                std::cout << "Enter Source: ";
                std::cin >> source;
                std::cout << "Enter Destination: ";
                std::cin >> destination;
                std::cout << "Enter Distance: ";
                std::cin >> distance;
                system.addTrip(Trip(source, destination, distance));
                break;
            }
            case 2: {
                std::string source, destination;
                std::cout << "Enter Source of Trip to Remove: ";
                std::cin >> source;
                std::cout << "Enter Destination of Trip to Remove: ";
                std::cin >> destination;
                system.removeTrip(source, destination);
                break;
            }
            case 3: {
                std::string name, email, discountType, source, destination;
                std::cout << "Enter Passenger Name: ";
                std::cin >> name;
                std::cout << "Enter Passenger Email: ";
                std::cin >> email;
                Customer customer(name, email);
                std::cout << "Enter Discount Type (None, Student, Military, Club): ";
                std::cin >> discountType;
                std::cout << "Enter Trip Source: ";
                std::cin >> source;
                std::cout << "Enter Trip Destination: ";
                std::cin >> destination;
                system.bookTicket(customer, discountType, Trip(source, destination, 100)); // Example Trip
                break;
            }
            case 4: {
                std::string name;
                std::cout << "Enter Passenger Name to Cancel: ";
                std::cin >> name;
                system.cancelTicket(name);
                break;
            }
            case 5:
                system.displayTrips();
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
