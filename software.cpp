/*	Programmer: Jeffrey Guzman
	Date: 9/27/2017
	Purpose: Sample using if - else statement
	Description: This program calculates cost of software units
				 purchased with discounts from 20% to 50%. Input validation
				 is done on the number of units for a positive value.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Variables and constants
	const int UnitP = 199;
	int quantity;
	double cost;

	//Get user input
	cout << "Enter number of units purchased: " << endl;
	cin >> quantity;

	//Input Validation
	if (quantity < 0)
	{
		cout << "Illegal input entered!!! Must enter a positive value: " << endl;
		cin >> quantity;
	}

	//Start calculations
	if (quantity < 10)
	{
		cost = quantity * UnitP;
	}
	else if (quantity < 20)
	{
		cost = quantity * UnitP - 0.20 * quantity * UnitP; //instead cost = quantity * UnitP * 0.8;
	}
	else if (quantity < 50)
	{
		cost = quantity * UnitP - 0.30 * quantity * UnitP; //instead cost = quantity * UnitP * 0.7;
	}
	else if (quantity < 100)
	{
		cost = quantity * UnitP - 0.40 * quantity * UnitP; //instead cost = quantity * UnitP * 0.6;
	}
	else
	{
		cost = quantity * UnitP - 0.50 * quantity * UnitP; //instead cost = quantity * UnitP * 0.5;
	}

	//Display Results
	cout << showpoint << fixed << setprecision(2);
	cout << "Total Units Purchased = " << quantity << " for the price of $" << cost << endl;

	return 0;
}