#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
    string make;
    string model;
    int year;
    int mileage; // New private member to store mileage

public:
    Vehicle(string mk, string md, int yr) : make(mk), model(md), year(yr), mileage(0) {}

    void setMake(string mk) {
        make = mk;
    }

    void setModel(string md) {
        model = md; // Set the model
    }

    void setYear(int yr) {
        year = yr; // Set the year
    }

    void setMileage(int miles) {
        mileage = miles; // Set the mileage
    }

    void displayVehicleInfo() {
        cout << "\n-----------------------------------" << endl;
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
        cout << "-----------------------------------\n" << endl;
    }

    // Method to check if servicing is needed based on mileage
    void checkServicing() {
        cout << "\n-------------------------" << endl;
        cout << "Service Check" << endl;
        cout << "-------------------------" << endl;
        cout << "Car: " << make << " " << model << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
        if (mileage > 10000) { // Assuming servicing is needed after 10,000 miles
            cout << "Status: Car needs servicing." << endl;
        } else {
            cout << "Status: Car doesn't need servicing yet." << endl;
        }
        cout << "-------------------------\n" << endl;
    }
};

int main() {
    string make, model;
    int year, mileage;

    

    // Create Vehicle object with user input
    Vehicle myVehicle("Toyota","Corolla", 2020);

    // Prompt user for mileage and set it
    cout << "\nEnter current mileage: ";
    cin >> mileage;
    myVehicle.setMileage(mileage); // Set the mileage

    // Display vehicle information
    cout << "\n-------------------------" << endl;
    cout << "Vehicle Information" << endl;
    cout << "-------------------------" << endl;
    myVehicle.displayVehicleInfo(); // Display vehicle info

    // Check if servicing is needed
    myVehicle.checkServicing(); 

    return 0;
}

