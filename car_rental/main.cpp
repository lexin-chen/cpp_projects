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

int main() {
    Car car1(1, "Masarati", "Ghibli", "Red", 2020, 80, true); 
    Car car2(2, "Porsche", "Cayenne", "Black", 2020, 90, true);
    Car car3(3, "Royce", "Rolls", "Silver", 2020, 100, true);
    Car car4(4, "Lamborghini", "Huracan", "Yellow", 2020, 110, false);
    for (int i = 0; i < 4; i++) {
        if (i == 0) {
            car1.printCar();
        } else if (i == 1) {
            car2.printCar();
        } else if (i == 2) {
            car3.printCar();
        } else {
            car4.printCar();
        }
    }
}