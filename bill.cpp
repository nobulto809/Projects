/*	Programmer: Jeffrey Guzman
	Date Written: 8/23/2017
	Purpose: First Program using calculations
	Descripton: This program calculates taxes and tipamount for a restuarant bill
				using 6.75% tax rate and 15% tip rate. Tip is calculated after taxes 
				are added to the bill.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Variables
	double bill; //Bill before taxes
	double taxR; //Tax rate = 6.75%
	double tipR;
	double taxes;
	double tipAmt;
	double totBill; //Bill after taxes

	//User Input
	cout << "Enter the amount of charges: " << endl;
	cin >> bill;
	cout << "Enter the tax rate: " << endl;
	cin >> taxR;
	cout << "Enter the tip rate: " << endl;
	cin >> tipR;

	//Start calculations
	taxes = bill * taxR;
	totBill = bill + taxes;
	tipAmt = totBill * tipR;
	totBill = bill + taxes + tipAmt;

	//Display Results
	cout << setprecision(2) << showpoint << fixed;
	cout << endl << "Meal Cost $" << bill << endl;
	cout << "Tax Amount $" << taxes << endl;
	cout << "Tip Amount $" << tipAmt << endl;
	cout << "Total Bill $" << totBill << endl << endl;

	return 0;
}