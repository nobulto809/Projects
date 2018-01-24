/*  First Sample Using A Function   */
#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototype
double calcAverage(int,int,int);

int main()
{
    //Variables
    int num1, num2, num3;
    double average;
    
    //Get input
    cout << "Enter 3 integer values: ";
    cin >> num1 >> num2 >> num3;
    
    //Call Function
    average = calcAverage(num1, num2, num3);
    
    //Display results
    cout << fixed << showpoint << setprecision(2);
    cout << "The average of " << num1 << ", " << num2 << " and " << num3 << " = " << average << endl;
    
    return 0;
}

//Function Declaration
double calcAverage(int num1, int num2, int num3)
{
    return ((num1 + num2 + num3) / 3.0);
}


