/*  Programer: Jeffrey Guzman
    Date: 11/9/2017
    Purpose: Homework
    Description: Reading in the sales of a restaurant that calculates the number of days for which data
                 was entered, the grand total for all the sales entered, the average for all the sales entered,
                 and the best (maximum) sale and the worst (minimum) sale and the day it was recorded.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //*******************************************************************************************************************
    //*******************************************************************************************************************
    
    //Variables
    const int SENTINEL = 9999;
    int days = 1, maxDay = 0, minDay = 0;
    double grandTot = 0.00;
    double sales = 0.00, avg = 0.00, max = 0.00, min = 0.00;
    string enter;
    
    //*******************************************************************************************************************
    //*******************************************************************************************************************
    
    //Brief Description of the Program!
    cout << "\n\t\t\t\t*******************************************\n";
    
    cout << "\n\t\t\t\tWelcome to the Straight Talk Bar and Grill!\n";
    
    cout << "\n\t\t\t\t*******************************************\n";
    
    cout << "\nThis program consists of you entering the number of sales you have made each"
    
         << "\nday and it will calculate the total amount of sales all together, calculate the"
    
         << "\naverage of the sales, the best and the worst sales made and tell you when those"
    
         << "\nsales occurred."
    
         << "\n\nPress Enter to start entering your sales!\n";
    
    getline(cin, enter);
    
    cout << "*************************************************************************************\n\n";
    
    //*******************************************************************************************************************
    //*******************************************************************************************************************
    
    //Get User Input
    cout << "Enter the total sales made for the day OR ENTER IN (9999) TO STOP: \n";
    cin >> sales;
    
    //Check if user entered NEGATIVE VALUES!!
    while (sales < 0)
    {
        cout << "\nYou have entered an invalid sales number. Please enter a positive "
        << "\nsales value ORENTER IN (9999) TO STOP: \n";
        cin >> sales;
    }
    
    //If the user enters 9999, Stop the program and do nothing!
    if (sales == SENTINEL)
    {
        cout << "\n";
    }
    else
    {
        max = sales;
        min = sales;
        while (sales != SENTINEL)
        {
            if (sales >= max)
            {
                max = sales;
                maxDay = days;
            }
            if (sales <= min)
            {
                min = sales;
                minDay = days;
            }
            
            grandTot += sales;
            days++;
            
            cout << "Enter the total sales made for the day OR ENTER IN (9999) TO STOP: \n";
            cin >> sales;
            while (sales < 0)
            {
                cout << "You have entered an invalid sales number. Please enter a positive "
                << "\nsales value ORENTER IN (9999) TO STOP: \n";
                cin >> sales;
            }
        }
    }
    
    //*******************************************************************************************************************
    //*******************************************************************************************************************
    
    //Calculate the Average
    avg = grandTot / days;
    
    cout << "\n*************************************************************************************\n";
    
    //*******************************************************************************************************************
    //*******************************************************************************************************************
    
    //Display Results
    cout << showpoint << fixed << setprecision(2);
    
    cout << "\nSum of all the sales entered\t\t\t\t\t\t\t\t= $" << grandTot
    
         << "\n\nAverage for all the sales entered\t\t\t\t\t\t\t= $" << avg
    
         << "\n\nThe best (maximum) sale which occurred on the " << maxDay << " day\t\t\t= $" << max
    
         << "\n\nThe worst (minimum) sale which occurred on the " << minDay << " day\t\t= $" << min
    
         << "\n\nThe number of days for which data was entered\t\t\t\t= " << days - 1
    
         << "\n\n";

    
    return 0;
}
