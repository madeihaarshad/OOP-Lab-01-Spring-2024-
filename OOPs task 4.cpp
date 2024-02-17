#include<iostream>
using namespace std;
class Person {
public:
    string name = "Madeiha Arshad";
    int age = 19;
void displayInformation() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Dog {
public:
    string name;
    int age;
    string breed;
Dog() {}
Dog(string dogName, string dogBreed, int dogAge) : name(dogName), breed(dogBreed), age(dogAge) {}
void displayInformation() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Breed: " << breed << endl;
    }
void changePet(string dogName, string dogBreed, int dogAge) {
        name = dogName;
        breed = dogBreed;
        age = dogAge;
    }
};
int main() {
    Person person1;
    cout<<"			***Pet's Owner***"<<endl;
    person1.displayInformation();
    cout << "----------------" << endl;
    Dog myDog("Finn", "Irish", 3);
     cout<<"			***Pet's Info***"<<endl;
    myDog.displayInformation();
    cout << "------------------" << endl;

    // Change the pet's information
    myDog.changePet("Ellie", "Scottish Fold", 2);
    
    cout<<"			***After changing pet***\n\nHey! I'm Madeiha Arshad and here is the intro of my new pet..\n"<<endl;
    
    // Display the updated dog information
    myDog.displayInformation();

    return 0;
}

