/*  Another sample for your HW -- Chips and Salsa Project   */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int SIZE = 12;
const string monthName[] = {"January" , "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

//Function Prototypes
void getData(double[]);

double getTot(double[]);
double getAvg(double[]);

int getBestRainFall(double[]);
int getWorstRainFall(double[]);

int main()
{
    //Variables Declaration
    double rainFall[SIZE];
    int highest, lowest;
    
    //Function Calls
    getData(rainFall);
    cout << "\nTotal Rain Fall for this year = " << getTot(rainFall) << endl;
    cout << "\nAverage Rain Fall for this year = " << getAvg(rainFall) << endl;
    
    highest = getBestRainFall(rainFall);
    lowest = getWorstRainFall(rainFall);
    
    cout << "\nThe highest Rain Fall of " << rainFall[highest] << " inches occured in the month of " << monthName[highest] << endl;
    cout << "\nThe lowest Rain Fall of " << rainFall[lowest] << " inches occured in the month of " << monthName[lowest] << endl << endl;
    
    return 0;
}

//Function Declaration
void getData(double rainFall[])
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter a rain fall amount for the month of " << monthName[i] << endl;
        cin >> rainFall[i];
        while (rainFall[i] < 0)
        {
            cout << "\nIllegal input value. Enter a value >= 0 " << endl;
            cin >> rainFall[i];
        }
    }
}

double getTot(double rainFall[])
{
    double total = 0.0;
    
    for (int i = 0; i < SIZE; i++)
    {
        total += rainFall[i];
    }
    return total;
}

double getAvg(double rainFall[])
{
    double total = 0.0;
    double avg = 0.0;
    
    for (int i = 0; i < SIZE; i++)
    {
        total += rainFall[i];
        avg = total / SIZE;
    }
    return avg;
}

int getBestRainFall(double rainFall[])
{
    int largest = 0;
    for (int i = 1; i < SIZE; i++)
        if (rainFall[i] > rainFall[largest])
        {
            largest = i;
        }
    
    return largest;
}

int getWorstRainFall(double rainFall[])
{
    int smallest = 0;
    for (int i = 1; i < SIZE; i++)
        if (rainFall[i] < rainFall[smallest])
        {
            smallest = i;
        }
    
    return smallest;
}
