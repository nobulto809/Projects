/*	Programmer: Jeffrey Guzman
	Date Writen: 9/22/2017
	Purpose: Sample for next homework #13, chapter 4
	Description: This program reads 3 numbers and decides which one is larger and which on is smaller.
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	//Variables
	double	num1, num2, num3;

	//Get user input
	cout << "Please enter two values; " << endl;
	cin >> num1 >> num2 >> num3;

	//Start Processing and find the smallest number
	if (num1 < num2 && num1 < num3)
	{
		cout << "The smallest number is " << num1 << endl;
	}
	if (num2 < num1 && num2 < num3)
	{
		cout << "The smallest number is " << num2 << endl;
	}
	if (num3 < num2 && num3 < num3)
	{
		cout << "The smallest number is " << num3 << endl;
	}
	//Find the largest number
	if (num1 > num2 && num1 > num3)
	{
		cout << "The largest number is " << num1 << endl;
	}
	if (num2 > num1 && num2 > num3)
	{
		cout << "The largest number is " << num2 << endl;
	}
	if (num3 > num1 && num3 > num2)
	{
		cout << "The largest number is " << num3 << endl;
	}
	//Are they all equal to each other
	if (num1 == num2 && num1 == num3)
	{
		cout << "The numbers are all equal to each other!" << num1 << endl;
	}
	
	return 0;
}