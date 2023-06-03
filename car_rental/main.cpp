#include <iostream>
#include <string>
#include "functions.hpp"

int main() {
    Car cars[] = {
        Car(1, "Masarati", "Ghibli", "Red", 2020, 80, true),
        Car(2, "Porsche", "Cayenne", "Black", 2020, 90, true),
        Car(3, "Royce", "Rolls", "Silver", 2020, 100, true),
        Car(4, "Lamborghini", "Huracan", "Yellow", 2020, 110, false)
    };
    std::cout << "Welcome to the car rental system!\n";
    std::cout << "Here are the available cars:\n";
    for (int i = 0; i < 4; i++) {
        if (cars[i].getIsAvailable()) {
            cars[i].printCar();
        }
    }
    std::cout << "Please enter the car ID of the car you would like to rent: ";
    int carID;
    std::cin >> carID;
    std::cout << "Please enter your name: ";
    std::string name;
    std::cin >> name;
    std::cout << "Please enter your address: ";
    std::string address;
    std::cin >> address;
    std::cout << "Please enter your phone number: ";
    std::string phone;
    std::cin >> phone;
    std::cout << "Please enter your email: ";
    std::string email;
    std::cin >> email;
    Customer customer(1, name, address, phone, email);
    std::cout << "Please enter how many days you are renting for: ";
    int rental_days;
    std::cin >> rental_days;
    Rental rental(1, carID, customer.getCustomerID(), rental_days, cars[carID - 1].getRentalFee(), 0);
    std::cout << "Invoice:\n";
    std::cout << "Customer:\n";
    customer.printCustomer();
    std::cout << "Car:\n";
    cars[carID - 1].printCar();
    std::cout << "Rental:\n";
    rental.printRental();
    std::cout << "Thank you for renting with us!\n";
}