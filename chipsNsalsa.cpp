/*  Programmer: Jeffrey Guzman
    Date: 3/1/18
    Purpose: Homework
    Description: Finding out which salsa was sold the most, sold the least, 
                 the average of all salsa's sold and the total of all the salsa that were sold.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int SIZE = 5;
const string salsaName[] = {"Mild" , "Medium", "Sweet", "Hot", "Zesty"};

//Function Prototypes
void getData(double[]);

double getTot(double[]);
double getAvg(double[]);

int getHighestSold(double[]);
int getLowestSold(double[]);

int main()
{
    //Variables Declaration
    double salsa[SIZE];
    int highest, lowest;
    
    //Function Calls
    getData(salsa);
    cout << "\nTotal Salsa's sold for this year = " << getTot(salsa) << endl;
    cout << "\nAverage Salsa's sold for this year = " << getAvg(salsa) << endl;
    
    highest = getHighestSold(salsa);
    lowest = getLowestSold(salsa);
    
    cout << "\nThe highest Salsa of " << salsa[highest] << " dollars sold occured for " << salsaName[highest] << endl;
    cout << "\nThe lowest Salsa of " << salsa[lowest] << " dollars sold occured for " << salsaName[lowest] << endl << endl;
    
    return 0;
}

//Function Declaration
void getData(double salsa[])
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter total sales that occured for the salsa of " << salsaName[i] << endl;
        cin >> salsa[i];
        while (salsa[i] < 0)
        {
            cout << "\nIllegal input value. Enter a value >= 0 " << endl;
            cin >> salsa[i];
        }
    }
}

double getTot(double salsa[])
{
    double total = 0.0;
    
    for (int i = 0; i < SIZE; i++)
    {
        total += salsa[i];
    }
    return total;
}

double getAvg(double salsa[])
{
    double total = 0.0;
    double avg = 0.0;
    
    for (int i = 0; i < SIZE; i++)
    {
        total += salsa[i];
        avg = total / SIZE;
    }
    return avg;
}

int getHighestSold(double salsa[])
{
    int largest = 0;
    for (int i = 1; i < SIZE; i++)
        if (salsa[i] > salsa[largest])
        {
            largest = i;
        }
    
    return largest;
}

int getLowestSold(double salsa[])
{
    int smallest = 0;
    for (int i = 1; i < SIZE; i++)
        if (salsa[i] < salsa[smallest])
        {
            smallest = i;
        }
    
    return smallest;
}
