/*  Programmer: Jeffrey Guzman
    Date Written: 9/10/2017
    Decription:
    Purpose:
*/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    //Variables and Constants
    const int adultP = 10;
    const int childP = 6;
    const double moviePercent = .80;
    const double distributor = .20;
    int adultT;
    int childT;
    double revenue;
    double theaterRev;
    double distributorRev;
    string movieName;
    
    //User input
    cout << "What movie do you want to see? " << endl;
    getline(cin,movieName);
    cout << "How many adult tickets? " << endl;
    cin >> adultT;
    cout << "How many children tickets? " << endl;
    cin >> childT;
    
    //Calculations
    revenue = (adultT * adultP) + (childT * childP);
    distributorRev = revenue * distributor;
    theaterRev = revenue * moviePercent;
    
    //Display results
    cout << setprecision(2) << showpoint << fixed;
    cout << "\nMovie Name:                       " << "\"" << movieName << "\"" << endl;
    cout << "Adult Tickets Sold:               " << adultT << endl;
    cout << "Child Tickets Sold:               " << childT << endl;
    cout << "Gross Box Office Revenue:        " << " $ " << right << setw(8) << revenue << endl;
    cout << "Amount Paid to Distributor:      " << "-$ " << right << setw(8) << distributorRev << endl;
    cout << "Net Box Office Revenue:          " << " $ " << right << setw(8) << theaterRev << endl;
    cout << endl;
    
    return 0;
}
