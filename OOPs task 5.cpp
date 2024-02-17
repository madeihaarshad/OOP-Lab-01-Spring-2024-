#include <iostream>
#include <string>
using namespace std;
class Neighborhood 
{
private:
    struct House 
	{
        static const int MAX_PERSONS = 12;
        int noOfPersons;
        string persons[MAX_PERSONS];
        int ages[MAX_PERSONS];
void information() 
		{
            cout << "\nEnter the number of persons in the house: ";
            cin >> noOfPersons;
            cin.ignore(); 
            for (int i = 0; i < noOfPersons; i++) 
			{
                cout << "\nEnter name of person " << i + 1 << ": ";
                getline(cin, persons[i]);
                cout << "\nEnter age of person " << i + 1 << ": ";
                cin >> ages[i];
                cin.ignore(); 
            }
        }
void display() 
		{
            for (int i = 0; i < noOfPersons; i++) 
			{
                cout << "\nPerson " << i + 1 << ": \nName: " << persons[i] << "\n Age: " << ages[i] << endl;
            }
        }
    };
House houses[12]; // Array to store houses
    int totalHouses;
public:
    Neighborhood() : totalHouses(0) {}
void addHouse() 
	{
        if (totalHouses < 12) 
		{
            cout << "\n			***House " << totalHouses + 1 << "***" << endl;
            houses[totalHouses].information();
            totalHouses++;
        }
        else 
		{
            cout << "The neighborhood has reached its capacity. No more houses can be added.." << endl;
        }
    }
void displayNeighborhood() 
	{
        cout << "\n			***Neighborhood  Info***\n";
        for (int i = 0; i < totalHouses; i++) 
		{
            cout << "\n			House " << i + 1 << ":\n";
            houses[i].display();
            cout << endl;
        }
    }
};

int main() 
{
    Neighborhood n1;
    char ch;
do 
	{
        cout << "Do you want to add a house? (y/n): ";
        cin >> ch;
        cin.ignore(); 
        if (ch == 'y' || ch == 'Y') {
            n1.addHouse();
        }
    } 
	while (ch == 'y' || ch == 'Y');
n1.displayNeighborhood();
return 0;
}
