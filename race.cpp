/*  Programmer: Jeffrey Guzman
    Date: 9/28/2017
    Purpose: Figure out who came in 1st, 2nd, 3rd, or if there is a tie
    Description: Determine who won the running race
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    //Variables
    double t1, t2, t3;
    string r1, r2, r3;
    
    //Get User Input
    cout << "Name of runner 1: " << endl;
    getline(cin, r1);
    cout << "Time of runner 1: " << endl;
    cin >> t1;
    while (t1 < 0)
    {
        cout << "Please enter a positive value: " << endl;
        cin >> t1;
    }
    cin.ignore();
    
    cout << "Name of runner 2: " << endl;
    getline(cin, r2);
    cout << "Time of runner 2: " << endl;
    cin >> t2;
    while (t2 < 0)
    {
        cout << "Please enter a positive value: " << endl;
        cin >> t2;
    }
    cin.ignore();
    
    cout << "Name of runner 3: " << endl;
    getline(cin, r3);
    cout << "Time of runner 3: " << endl;
    cin >> t3;
    while (t3 < 0)
    {
        cout << "Please enter a positive value: " << endl;
        cin >> t3;
    }
    
    //***********************************************************************************************************
    //***********************************************************************************************************
    
    //Check who comes in 1st, 2nd, and 3rd
    if (t1 < t2 && t1 < t3)
    {
        cout << r1 << " is the fastest runner with a time of " << t1 << endl;
        if (t3 == t2 && t3 > t1 && t2 > t1)
        {
            cout << r1 << " came in first place." << endl;
            cout << "Runners " << r2 << " & " << r3 << " are tied for second place with a time of " << t2 << endl;
        }
        else if (t2 < t3)
        {
            cout << r2 << " is the second fastest runner with a time of " << t2 << endl;
            cout << r3 << " is the third fastest runner with a time of " << t3 << endl;
        }
        else
        {
            cout << r3 << " is the second fastest runner with a time of " << t3 << endl;
            cout << r2 << " is the third fastest runner with a time of " << t2 << endl;
        }
    }
    
    if (t2 < t1 && t2 < t3)
    {
        cout << r2 << " is the fastest runner with a time of " << t2 << endl;
        if (t1 == t3 && t1 > t2 && t3 > t2)
        {
            cout << r2 << " came in first place." << endl;
            cout << "Runners " << r1 << " & " << r3 << " are tied for second place with a time of " << t1 << endl;
        }
        else if (t1 < t3)
        {
            cout << r1 << " is the second fastest runner with a time of " << t1 << endl;
            cout << r3 << " is the third fastest runner with a time of " << t3 << endl;
        }
        else
        {
            cout << r3 << " is the second fastest runner with a time of " << t3 << endl;
            cout << r1 << " is the third fastest runner with a time of " << t1 << endl;
        }
    }
    
    if (t3 < t2 && t3 < t1)
    {
        cout << r3 << " is the fastest runner with a time of " << t3 << endl;
        if (t1 == t2 && t1 > t3 && t2 > t3)
        {
            cout << r3 << " came in first place." << endl;
            cout << "Runners " << r1 << " & " << r2 << " are tied for second place with a time of " << t1 << endl;
        }
        else if (t1 < t2)
        {
            cout << r1 << " is the second fastest runner with a time of " << t1 << endl;
            cout << r2 << " is the third fastest runner with a time of " << t2 << endl;
        }
        else
        {
            cout << r2 << " is the second fastest runner with a time of " << t2 << endl;
            cout << r1 << " is the third fastest runner with a time of " << t1 << endl;
        }
    }
    
    //***********************************************************************************************************
    //***********************************************************************************************************
    
    //Check to see who are tied for 1st place
    if (t1 == t2 && t1 < t3 && t2 < t3)
    {
        cout << "Runners " << r1 << " & " << r2 << " are tied for first place with a time of " << t1 << endl;
        cout << "Runner " << r3 << " came in last place with a time of " << t3 << endl;
    }
    
    if (t1 == t3 && t1 < t2 && t3 < t2)
    {
        cout << "Runners " << r1 << " & " << r3 << " are tied for first place with a time of " << t1 << endl;
        cout << "Runner " << r2 << " came in last place with a time of " << t2 << endl;
    }
    
    if (t3 == t2 && t3 < t1 && t2 < t1)
    {
        cout << "Runners " << r3 << " & " << r2 << " are tied for first place with a time of " << t2 << endl;
        cout << "Runner " << r1 << " came in last place with a time of " << t1 << endl;
    }
    
    //***********************************************************************************************************
    //***********************************************************************************************************
    
    //If all are tied for 1st place
    if (t1 == t2 && t1 == t3)
    {
        cout << r1 << " & " << r2 << " & " << r3 << " are all tied for first place with a time of: " << t1 << endl;
    }
    
    
    return 0;
}
