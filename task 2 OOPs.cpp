#include <iostream>
#include <string>
using namespace std;
class Person 
{
public:
    string name;
    int age;
// Constructor for Person class
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
};
class House {
public:
    int noofpersons;
    const int max = 10; // Maximum number of persons in the house
    Person persons[10];
// Constructor for House class
    House() 
	{
        noofpersons = 0;
    }
void information() 
	{
        cout << "Enter no of persons in house: ";
        cin >> noofpersons;
        for (int i = 0; i < noofpersons; i++) 
		{
            cout << "Enter name of person " << i + 1 << ": ";
            cin >> persons[i].name;
            cout << "Enter age of person " << i + 1 << ": ";
            cin >> persons[i].age;
        }
    }
void display()
	 {
        cout << "			**All persons details**\n";
        for (int i = 0; i < noofpersons; i++) 
		{
            cout << "Person " << i + 1 << ": \nName: " << persons[i].name << ", \nAge: " << persons[i].age << endl;
        }
    }
};
int main() 
{
    House details;
    details.information();
    details.display();
    return 0;
}

