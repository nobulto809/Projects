/*	Programmer: Jeffrey Guzman
	Date: 10/27/2017
	Purpose: Salary project
	Description: This program calculates the total salary for an employee
					who works maximum 31 days and the salary starts with a
					penny for the first day and it doubles each day after that.
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	//Variables
	string name;
	int day;
	int daysworked;
	double dailyPay;
	double totalPay;

	//Initialization
	dailyPay = 0.01;
	totalPay = 0.00;

	//Get user input
	cout << "Enter the name of an employee: \n";
	getline(cin, name);
	cout << "Enter number of days this employee worked: \n";
	cin >> daysworked;

	//Validation
	if (daysworked < 1 || daysworked > 31)
	{
		cout << "Illegal value entered. Must enter a number between 1 and 31. Try again!\n";
		cin >> daysworked;
	}
	
	cout << fixed << showpoint << setprecision(2);
	cout << "Day\t\tSalary\n";
	cout << "---------------------------\n";
	
	for (day = 1; day <= daysworked; day++)
	{
		cout << day << "\t\t$" << dailyPay << "\n";
		totalPay += dailyPay;
		dailyPay *= 2;
	}
	cout << "\n\nTotal pay for " << name << " who worked for " << daysworked << " days = $" << totalPay << "\n\n";

	return 0;
}