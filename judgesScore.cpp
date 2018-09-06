/*  Programmer: Jeffrey Guzman
    Date Writen: 2/6/18
    Purpose:
    Description:
*/

#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototypes
void getJudgeData(double &, double &, double &, double &, double &);
double findLowest(double, double, double, double, double);
double findHighest(double, double, double, double, double);
double calcScore(double, double, double, double, double, double, double);

int main()
{
    //Variables
    double test1, test2, test3, test4, test5, lowest, highest, average;
    
    //Function Calls
    getJudgeData(test1, test2, test3, test4, test5);
    lowest = findLowest(test1, test2, test3, test4, test5);
    highest = findHighest(test1, test2, test3, test4, test5);
    average = calcScore(test1, test2, test3, test4, test5, lowest, highest);
    cout << fixed << showpoint << setprecision(2);
    cout << "The average of the top 3 scores = " << average << endl;
    return 0;
}

//Function Declarations
void getJudgeData(double &t1, double &t2, double &t3, double &t4, double &t5)
{
    cout << "Enter 5 scores " << endl;
    cin >> t1 >> t2 >> t3 >> t4 >> t5;
    while (t1 < 0 || t2 < 0 || t3 < 0 || t4 < 0 || t5 < 0)
    {
        cout << "Illegal score entered. Must have positve value. Try again! \n";
        cin >> t1 >> t2 >> t3 >> t4 >> t5;
    }
    while (t1 > 10 || t2 > 10 || t3 > 10 || t4 > 10 || t5 > 10)
    {
        cout << "Illegal score entered. Must have positve value <= 10. Try again! \n";
        cin >> t1 >> t2 >> t3 >> t4 >> t5;
    }
}

double findLowest(double t1, double t2, double t3, double t4, double t5)
{
    double smallest;
    
    smallest = t1;
    
    if (t2 < smallest)
        smallest = t2;
    if (t3 < smallest)
        smallest = t3;
    if (t4 < smallest)
        smallest = t4;
    if (t5 < smallest)
        smallest = t5;
    
    return smallest;
    
}

double findHighest(double t1, double t2, double t3, double t4, double t5)
{
    double highest;
    
    highest = t1;
    
    if (t2 > highest)
        highest = t2;
    if (t3 > highest)
        highest = t3;
    if (t4 > highest)
        highest = t4;
    if (t5 > highest)
        highest = t5;
    
    return highest;
}

double calcScore(double test1, double test2, double test3, double test4, double test5, double lowest, double highest)
{
    double average;
    
    return (test1 + test2 + test3 + test4 + test5 - lowest - highest) / 3;
}
