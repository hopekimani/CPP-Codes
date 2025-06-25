/*
 Author:Hope Kimani
 Reg no:BBIT-01-0009/2025
 Description:Program to calculate the gross pay, taxes and net pay.
 Date:11/06/2025
 Version 1
 */

#include <iostream>
using namespace std;


class Car {
private:

    string brand;
    string model;
    float price;
    int mileage;

public:

    Car(string b, string m, float p, int km) : brand(b), model(m), price(p), mileage(km) {}


    void display() {
        cout << "Car Details:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
        cout << "Mileage: " << mileage << " km" << endl;
    }


    void drive(int distance) {
        mileage += distance;
        cout << "After driving " << distance << " km, updated mileage: " << mileage << " km" << endl;
    }
};


int main() {

    Car myCar("Toyota", "Corolla", 20000, 5000);


    myCar.display();


    myCar.drive(150);


    myCar.drive(300);

    return 0;
}