/*  Programmer: Jeffrey Guzman
    Date Written: 9/1/17
    Purpose: To figure out how many coats are needed to paint.
    Description: Using Length x Width to find the Area of how much paint
                    is needed to paint two coats on a wooden fence.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Variables
    double  length, width, area;
    int gallons;
    
    //User input
    std::cout << "What is the length: " << endl;
    std::cin >> length;
    std::cout << "What is the width: " << endl;
    std::cin >> width;
    
    //Calculations
    area = length * width;
    gallons = 2 * area / 340;
    
    //Display
    std::cout << setprecision(2) << showpoint << fixed;
    std::cout << "Gallons needed to paint the wooden fence using two coats are: " << gallons << endl << endl;
    
    return 0;
}

