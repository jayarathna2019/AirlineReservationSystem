// airreservation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Database.h"
using namespace std;
using namespace UserApp;

int displayMenu();
void reserveUser(Database& db);
void getUsers(Database& db);
int main()
{ 
	Database userDb;
	while (true) {
		int selection = displayMenu();
		switch (selection) {
		case 6:
			return 0;
		case 1:
			reserveUser(userDb);
			break;
		case 2:
			getUsers(userDb);
			break;
		case 3:	
			userDb.displayAll();
			break;
		default:
			cerr << "Unknown command.Try again" << endl;
			break;
		}
	}
	return 0;
}
void reserveUser(Database& db) {
	string pName;
	string passportNo;
	cout << "Passenger Name?";
	cin >> pName;
	cout << "Passenger Passport no?";
	cin >> passportNo;

	db.reserveUser(pName, passportNo);
}
void getUsers(Database& db)
{
	int flightNo;
	cout << "Flight number?" << endl;
	cin >> flightNo
	db.getUser(flightNo).display();
}
int displayMenu()
{
	int selection;
	cout << endl;
	cout << "User database:" << endl;
	cout << "1.Reserve a seat" << endl;
	cout << "2.Flight schedule" << endl;
	cout << "3.Display passenger info" << endl;
	cout << "4.Flight details" << endl;
	cout << "5.User ticket info" << endl;
	cout << "6.Exit the program" << endl;
	cin >> selection;
	return selection;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
