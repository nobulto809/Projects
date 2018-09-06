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
    double wholeSale, discount, retail;
    
    //Get User Input
    cout << "Please enter whole sale price of an item: " << endl;
    cin >> wholeSale;
    
    cout << "Please enter discount percentage: " << endl;
    cin >> discount;
    
    //Function Call
    retail = calculateRetail(wholeSale, discount);
    
    //Display Results
    cout << fixed << showpoint << setprecision(2);
    cout << "\n\n\nWhole Sale Price     = $" << wholeSale
    << "\nDiscount Percentage  = " << discount << "%"
    << "\nRetail Price         = $" << retail << "\n\n\n";
    
    return 0;
}

//Function Declaration
double calculateRetail(double wholesale, double discount)
{
    return (wholesale - wholesale * (discount / 100));  //Subtract it from the original price to get the discount total
}
