/*	Programmer: Jeffrey Guzman
	Date: 10/11/2017
	Purpose: Sample for Bus Lines Project
	Description: This program calculates area of a circle, rectangle, or a triangle.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Constants and Variables
	const double PI = 3.14159;
	double radius, length, width, base, height, area;
	int choice;

	cout << "Geometry Calculator\n\n";
	cout << "\t1. Calculate the Area of a Circle\n";
	cout << "\t2. Calculate the Area of a Rectangle\n";
	cout << "\t3. Calculate the Area of a Triangle\n";
	cout << "\t4. Quit\n\n";
	cout << "Enter your choice (1-4): ";
	cin >> choice;
	cout << fixed << showpoint << setprecision(2);
	switch (choice)
	{
	case 1:cout << "Enter the radius of a circle:" << endl;
		cin >> radius;
		if (radius <= 0)
		{
			cout << "Illegal value entered. Must enter a positive value.\n";
			cin >> radius;
		}
		area = PI * radius * radius;
		cout << "Area of the circle = " << area << endl;
		break;
	case 2:cout << "Enter the length and the width of the rectangle: \n";
		cin >> length >> width;
		if (length <= 0 || width <= 0)
		{
			cout << "Illegal value entered. Must enter a positive value.\n";
			cin >> length >> width;
		}
		area = length * width;
		cout << "Area of the rectangle = " << area << endl;
		break;
	case 3:cout << "Enter the base and the height of the triangle: \n";
		cin >> base >> height;
		if (base <= 0 || height <= 0)
		{
			cout << "Illegal value entered. Must enter a positive value.\n";
			cin >> base >> height;
		}
		area = base * height * .5;
		cout << "Area of the triangle = " << area << endl;
		break;
	case 4: "\nQUIT.\n";
	} //End of the switch statement

	return 0;
}