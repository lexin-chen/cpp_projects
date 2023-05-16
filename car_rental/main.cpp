#include <iostream>
#include <string>
#include "functions.hpp"

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