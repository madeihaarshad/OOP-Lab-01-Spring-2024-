#include<iostream>
#include<string>
using namespace std;
class Dog 
{
    string name, breed;
    int age;
public:
    Dog(string a, int b, string c) 
	{
        name = a;
        age = b;
        breed = c;
    }
void displayDetails() 
	{
		cout<<"			***Pet's info***"<<endl;
        cout << "\nName: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Breed: " << breed << endl;
    }
};
class Person 
{
public:
    string name;
    int age;
Person() 
	{
        name = "";
        age = 0;
    }
Person(string n, int a) 
	{
        name = n;
        age = a;
    }
    
    void displayData() 
	{
		cout<<"			***Person's info***"<<endl;;
        cout << "\nName: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class House 
{
public:
    string name;
    int houseno;
House() 
	{
        name = "";
        houseno = 0;
    }
House(string x, int y) 
	{
        name = x;
        houseno = y;
    }
void displayHinfo() 
	{
		cout<<"			***House info***"<<endl;
        cout << "\nName: " << name << endl;
        cout << "House No: " << houseno << endl;
    }
};
int main() {
    Dog d1("Finn", 3, "Irish");
    d1.displayDetails();
Person p1("Madeiha Arshad" , 19);
    p1.displayData();
    House h1("Satti's House" , 272);
    h1.displayHinfo();
    return 0;
}

