/*  Sample for HW #3
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int SIZE = 20;
    double salary[SIZE], sum, highest, lowest, avg;
    int i;
    
    sum = 0.0;
    
    
    for (i = 0; i < SIZE; i++)
    {
        cout << "Enter a salary for employee " << i + 1 << endl;
        cin >> salary[i];
        sum += salary[i];
    }
    avg = sum / SIZE;
    
    highest = salary[0];
    lowest = salary[0];
    
    for (i = 1; i < SIZE; i++)
    {
        if (salary[i] >= highest)
        {
            highest = salary[i];
        }
        if (salary[i] <= lowest)
        {
            lowest = salary[i];
        }
    }
    
    cout << showpoint << fixed << setprecision(2);
    cout << "The average salary = $" << avg
         << "\nThe highest salary = $" << highest
         << "\nThe lowest salary = $" << lowest << endl << endl;
    
}
