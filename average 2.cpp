/* Sample for HW #2*/
#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototypes
void getScores(double &, double &, double &, double &, double &);
double findLowest(double, double, double, double, double);
double calculateAverage(double, double, double, double, double, double);

int main()
{
    //Variables
    double test1, test2, test3, test4, test5, lowest, average;
    
    //Function Calls
    getScores(test1, test2, test3, test4, test5);
    lowest = findLowest(test1, test2, test3, test4, test5);
    average = calculateAverage(test1, test2, test3, test4, test5, lowest);
    cout << fixed << showpoint << setprecision(2);
    cout << "The average of the top 4 tests score = " << average << endl;
    return 0;
}

//Function Declarations
void getScores(double &t1, double &t2, double &t3, double &t4, double &t5)
{
    cout << "Enter 5 test scores " << endl;
    cin >> t1 >> t2 >> t3 >> t4 >> t5;
    while (t1 < 0 || t2 < 0 || t3 < 0 || t4 < 0 || t5 < 0)
    {
        cout << "Illegal score entered. Must have positve value. Try again! \n";
        cin >> t1 >> t2 >> t3 >> t4 >> t5;
    }
    while (t1 > 100 || t2 > 100 || t3 > 100 || t4 > 100 || t5 > 100)
    {
        cout << "Illegal score entered. Must have positve value <= 100. Try again! \n";
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

double calculateAverage(double test1, double test2, double test3, double test4, double test5, double lowest)
{
    double average;
    
    return (test1 + test2 + test3 + test4 + test5 - lowest) / 4;
}
