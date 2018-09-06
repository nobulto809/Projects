/*  Sample using 2-D arrays */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int ROWS = 3;
    const int COLS = 5;
    double sales[ROWS][COLS];
    double empHours[ROWS] = { 0 };
    double dailyHours[COLS] = { 0 };
    
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << "Enter hours for day " << j + 1 << " for employee # " << i + 1 << endl;
            cin >> sales[i][j];
        }
    }
    
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
        {
            empHours[i] += sales[i][j];
        }
    
    for (int j = 0; j < COLS; j++)
        for (int i = 0; i < ROWS; i++)
        {
            dailyHours[j] += sales[i][j];
        }
    
    cout << "\n\n";
    cout << "Employee\tMonday\tTuesday\t  Wed\tThurs\tFriday\tTotal\n";
    cout << "----------------------------------------------------------\n";
    for (int i = 0; i < ROWS; i++)
    {
        cout << "\t" << i + 1 << "\t\t";
        for (int j = 0; j < COLS; j++)
        {
            cout << "   " << sales[i][j] << "\t";
        }
        
        cout << empHours[i] << "\n\n";
    }
    
    cout << "Total = ";
    for (int j = 0; j < COLS; j++)
        cout << "\t   " << dailyHours[j];
    cout << "\n\n";
    
    return 0;
    
}
