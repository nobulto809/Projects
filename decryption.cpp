/*	Programmer: Jeffrey Guzman
	Date Writen: 9/15/2017
	Purpose: Decryption Program
	Description: This Program decrypts a 4-digit number as follows:
				1. Seperate the digits using / and %
				2. Add 3 to each digit and % with
				3. Swap the 1st digit with the 3rd and 2nd digit
					with the 4th.
				4. Display the decrypted number.
*/
#include <iostream>
using namespace std;

int main()
{
	//Variables
	int number, d1, d2, d3, d4, temp;

	//Ask User Input
	cout << "Enter a 4-digit number: " << endl;
	cin >> number;

	//Seperate the Digits
	d1 = number / 1000;
	number = number % 1000;
	d2 = number / 100;
	number = number % 100;
	d3 = number / 10;
	d4 = number % 10;

	//Start Decryption Process
	d1 = (d1 + 3) % 10;
	d2 = (d2 + 3) % 10;
	d3 = (d3 + 3) % 10;
	d4 = (d4 + 3) % 10;

	//Swap 1st and 3rd digits
	temp = d3;
	d3 = d1;
	d1 = temp;

	//Swap 2nd and 4th digits
	temp = d4;
	d4 = d2;
	d2 = temp;

	//Display the Decrypted Number
	cout << "The decrypted number is: " << d1 * 1000 + d2 * 100 + d3 * 10 + d4 * 1 << endl;

	return 0;
}