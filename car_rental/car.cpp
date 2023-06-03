#include <iostream>
#include <string>
#include "functions.hpp"

Car::Car(int carID, std::string make, std::string model, std::string color, int year, int rental_fee, bool is_available) 
    : carID(carID), make(make), model(model), color(color), year(year), rental_fee(rental_fee), is_available(is_available) {}
int Car::getCarID() {
    return carID;
}
std::string Car::getMake() {
    return make;
}
std::string Car::getModel() {
    return model;
}
std::string Car::getColor() {
    return color;
}
int Car::getYear() {
    return year;
}
int Car::getRentalFee() {
    return rental_fee;
}
bool Car::getIsAvailable() {
    return is_available;
}
void Car::setIsAvailable(bool is_available) {
    this->is_available = is_available;
}
void Car::printCar() {
    std::cout << "Car ID: " << carID << std::endl;
    std::cout << "Make: " << make << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Color: " << color << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "Rental Fee: " << rental_fee << std::endl;
    std::cout << "Is Available: " << is_available << std::endl;
}

Customer::Customer(int customerID, std::string name, std::string address, std::string phone, std::string email) 
    : customerID(customerID), name(name), address(address), phone(phone), email(email) {}
int Customer::getCustomerID() {
    return customerID;
}
std::string Customer::getName() {
    return name;
}
std::string Customer::getAddress() {
    return address;
}
std::string Customer::getPhone() {
    return phone;
}
std::string Customer::getEmail() {
    return email;
}
void Customer::printCustomer() {
    std::cout << "Customer ID: " << customerID << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Address: " << address << std::endl;
    std::cout << "Phone: " << phone << std::endl;
    std::cout << "Email: " << email << std::endl;
}

Rental::Rental(int rentalID, int carID, int customerID, int rental_days, int rental_fee, int late_fee) 
    : rentalID(rentalID), carID(carID), customerID(customerID), rental_days(rental_days), rental_fee(rental_fee), late_fee(late_fee) {}
int Rental::getRentalID() {
    return rentalID;
}
int Rental::getCarID() {
    return carID;
}
int Rental::getCustomerID() {
    return customerID;
}
int Rental::getRentalDays() {
    return rental_days;
}
int Rental::getRentalFee() {
    return rental_fee;
}
int Rental::getLateFee() {
    return late_fee;
}
void Rental::printRental() {
    std::cout << "Rental ID: " << rentalID << std::endl;
    std::cout << "Car ID: " << carID << std::endl;
    std::cout << "Customer ID: " << customerID << std::endl;
    std::cout << "Total rent days: " << rental_days << std::endl;
    std::cout << "Rental Fee: " << rental_fee << std::endl;
    std::cout << "Late Fee: " << late_fee << std::endl;
}
