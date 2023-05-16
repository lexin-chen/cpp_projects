#include <iostream>
#include <string>
#include <vector>

class Car {
    int carID;
    std::string make;
    std::string model;
    std::string color;
    int year;
    int rental_fee;
    bool is_available;
    public: 
        Car(int carID, std::string make, std::string model, std::string color, int year, int rental_fee, bool is_available);
        int getCarID();
        std::string getMake();
        std::string getModel();
        std::string getColor();
        int getYear();
        int getRentalFee();
        bool getIsAvailable();
        void setIsAvailable(bool is_available);
        void printCar();
};

class Customer {
    int customerID;
    std::string name;
    std::string address;
    std::string phone;
    std::string email;
};

class Rental {
    int rentalID;
    int carID;
    int customerID;
    std::string rental_date;
    std::string return_date;
    int rental_fee;
    int late_fee;
    public:
        Rental(int rentalID, int carID, int customerID, std::string rental_date, std::string return_date, int rental_fee, int late_fee);
        int getRentalID();
        int getCarID();
        int getCustomerID();
        std::string getRentalDate();
        std::string getReturnDate();
        int getRentalFee();
        int getLateFee();
        void printRental();
};