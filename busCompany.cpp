/*  Programmer: Jeffrey Guzman
    Date: 10/21/2017
    Purpose: Display the cost for how many townlines have been crossed
    Description: Calculates costs within 10 townlines.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Variables
    const double baseRate = 0.55;
    const double townLine1 = 0.25;
    const double townLine2 = 0.25;
    const double townLineAfter = 0.15;
    int townLineCrossed;
    double total;
    
    //Breif Description of the program
    cout << "Welcome to the Cheathem Bus Company.\n\n";
    cout << "We are charging $0.55 as a standard base rate that covers all town lines potentially being crossed.\n";
    cout << "An additional $0.25 will be charged for each of the first two town lines crossed.\n";
    cout << "For all other town lines crossed after the first two, $0.15 will be charged per town line.\n";
    cout << "If you are not crossing any town lines, you will enter 0 when asked.\n";
    cout << "If you are crossing 1 or more town lines, enter how many you will be crossing.\n\n";
    
    //Get user input
    cout << "How many townlines did you cross?: \n";
    cin >> townLineCrossed;
    while (townLineCrossed < 0 || townLineCrossed > 10)
    {
        cout << "Invalid number entered! Please enter numbers between (0 - 10) for the amount of townlines you've crossed:\n";
        cin >> townLineCrossed;
    }
    cout << fixed << showpoint << setprecision(2);
    
    switch (townLineCrossed)
    {
        case 0:
            total = baseRate;
            cout << "\nYou have crossed " << townLineCrossed << " townlines.\n";
            cout << "Your fare will be $" << total << ".\n";
            cout << "The breakdown is as follows:\n";
            cout << "\tBase Rate ...\t\t\t\t\t\t$" << baseRate << "\n";
            cout << "\t\t\t\t\t\t\t\t\t\t_____\n\n";
            cout << "\tTotal Fare\t\t\t\t\t\t\t$" << total << "\n\n";
            break;
        case 1:
            total = baseRate + townLine1;
            cout << "\nYou have crossed " << townLineCrossed << " townline.\n";
            cout << "Your fare will be $" << total << ".\n";
            cout << "The breakdown is as follows:\n";
            cout << "\tBase Rate ...\t\t\t\t\t\t$" << baseRate << "\n";
            cout << "\tFirst Townline crossed ...\t\t\t$" << townLine1 << "\n";
            cout << "\t\t\t\t\t\t\t\t\t\t_____\n\n";
            cout << "\tTotal Fare\t\t\t\t\t\t\t$" << total << "\n\n";
            break;
        case 2:
            total = baseRate + townLine1 + townLine2;
            cout << "\nYou have crossed " << townLineCrossed << " townlines.\n";
            cout << "Your fare will be $" << total << ".\n";
            cout << "The breakdown is as follows:\n";
            cout << "\tBase Rate ...\t\t\t\t\t\t$" << baseRate << "\n";
            cout << "\tFirst Townline crossed ...\t\t\t$" << townLine1 << "\n";
            cout << "\tSecond Townline crossed ...\t\t\t$" << townLine1 << "\n";
            cout << "\t\t\t\t\t\t\t\t\t\t_____\n\n";
            cout << "\tTotal Fare\t\t\t\t\t\t\t$" << total << "\n\n";
            break;
        case 3:
            total = baseRate + townLine1 + townLine2 + townLineAfter;
            cout << "\nYou have crossed " << townLineCrossed << " townlines.\n";
            cout << "Your fare will be $" << total << ".\n";
            cout << "The breakdown is as follows:\n";
            cout << "\tBase Rate ...\t\t\t\t\t\t$" << baseRate << "\n";
            cout << "\tFirst Townline crossed ...\t\t\t$" << townLine1 << "\n";
            cout << "\tSecond Townline crossed ...\t\t\t$" << townLine1 << "\n";
            cout << "\tSubsequent Townlines crossed ...\t$" << townLineAfter << "\n";
            cout << "\t\t\t\t\t\t\t\t\t\t_____\n\n";
            cout << "\tTotal Fare\t\t\t\t\t\t\t$" << total << "\n\n";
            break;
        case 4:case 5:case 6:case 7:case 8:case 9:case 10:
            total = baseRate + townLine1 + townLine2 + ((townLineCrossed - 2) * townLineAfter);
            cout << "\nYou have crossed " << townLineCrossed << " townlines.\n";
            cout << "Your fare will be $" << total << ".\n";
            cout << "The breakdown is as follows:\n";
            cout << "\tBase Rate ...\t\t\t\t\t\t$" << baseRate << "\n";
            cout << "\tFirst Townline crossed ...\t\t\t$" << townLine1 << "\n";
            cout << "\tSecond Townline crossed ...\t\t\t$" << townLine1 << "\n";
            cout << "\tSubsequent Townlines crossed " << townLineCrossed - 2 <<"x ...\t$" << ((townLineCrossed - 2) * townLineAfter) << "\n";
            cout << "\t\t\t\t\t\t\t\t\t\t_____\n\n";
            cout << "\tTotal Fare\t\t\t\t\t\t\t$" << total << "\n\n";
            break;
    }
    
    return 0;
}
