/*  Programmer: Jeffrey Guzman
    Date: 1/23/18
    Purpose: Sample project for HW 1 Chapter 6 Problem 1
    Description:
*/
#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototype
double calculateRetail(double, double);

int main()
{
    double wholeSale, markup, retail;
    
    //Get User Input
    cout << "Please enter whole sale price of an item: " << endl;
    cin >> wholeSale;
    
    cout << "Please enter markup percentage: " << endl;
    cin >> markup;
    
    //Function Call
    retail = calculateRetail(wholeSale, markup);
    
    //Display Results
    cout << fixed << showpoint << setprecision(2);
    cout << "\n\n\nWhole Sale Price     = $" << wholeSale
         << "\nMarkUp Percentage    = " << markup << "%"
         << "\nRetail Price         = $" << retail << "\n\n\n";
    
    return 0;
}

//Function Declaration
double calculateRetail(double wholesale, double markup)
{
    return (wholesale + wholesale * (markup / 100));
}
