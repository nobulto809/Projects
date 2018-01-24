#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	//Variables
	const int inState = 3000;
	const int outState = 4500;
	const int inSRB = 2500;
	const int outSRB = 3500;
	int tot;
	string IO;
	string YN;

	//User Input
	cout << "Please input ""I"" if you are in-state or ""O"" if you are out-of-state: " << endl;
	getline(cin, IO);

	cout << "Please input ""Y"" if you require room and board and ""N"" if you do not: " << endl;
	getline(cin, YN);

	//Validation
	if (IO == "I" || IO == "i")
	{
		if (YN == "N" || YN == "n")
		{
			tot = inState;
			cout << "Your total bill for this semester is $" << tot << endl;
		}
		else if (YN == "Y" || YN == "y")
		{
			tot = inState + inSRB;
			cout << "Your total bill for this semester is $" << tot << endl;
		}
	}

	if (IO == "O" || IO == "o")
	{
		if (YN == "N" || YN == "n")
		{
			tot = outState;
			cout << "Your total bill for this semester is $" << tot << endl;
		}
		else if (YN == "Y" || YN == "y")
		{
			tot = outState + outSRB;
			cout << "Your total bill for this semester is $" << tot << endl;
		}
	}

	return 0;
}