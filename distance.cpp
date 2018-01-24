/*	Programmer: Jeffrey Guzman
	Date Written: 8/28/17
	Purpose: Another program using input
	Description: This program calulates total miles traveled using one tank of gas
				 in town and on the highway.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Variables
	double tankSize, mpgTown, mpgHighway, totTownMiles, totHighwayMiles;

	//User Input
	cout << "Enter total number of gallons used: " << endl;
	cin >> tankSize;

	cout << "Enter Miles per gallon in-town for this car: " << endl;
	cin >> mpgTown;

	cout << "Enter Miles per gallon on highway for this car: " << endl;
	cin >> mpgHighway;

	//Calculations
	totTownMiles = mpgTown * tankSize;
	totHighwayMiles = mpgHighway * tankSize;

	//Display Results
	cout << fixed << showpoint << setprecision(2);
	cout << "Total Gallons used = " << tankSize
		<< "\nMiles Per Gallon in-town = " << mpgTown
		<< "\nMiles in-town Miles = " << totTownMiles
		<< "\nMiles Per Gallon on highway = " << mpgHighway
		<< "\nTotal highway Miles = " << totHighwayMiles << endl << endl;
	return 0;
}