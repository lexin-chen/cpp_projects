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
    public:
        Customer(int customerID, std::string name, std::string address, std::string phone, std::string email);
        int getCustomerID();
        std::string getName();
        std::string getAddress();
        std::string getPhone();
        std::string getEmail();
        void printCustomer();
};

class Rental {
    int rentalID;
    int carID;
    int customerID;
    int rental_days;
    int rental_fee;
    int late_fee;
    public:
        Rental(int rentalID, int carID, int customerID, int rental_days, int rental_fee, int late_fee);
        int getRentalID();
        int getCarID();
        int getCustomerID();
        int getRentalDays();
        int getRentalFee();
        int getLateFee();
        void printRental();
};