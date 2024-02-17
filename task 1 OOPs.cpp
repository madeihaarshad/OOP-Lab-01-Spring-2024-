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
        
		cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Breed: " << breed << endl;
        
    }
};
int main() 

{
   
    Dog d1("Finn", 3, "Irish");
    d1.displayDetails();
    return 0;
}

