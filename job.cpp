/*  Sample with arrays
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Variables
    double grade[20], sum, avg;         //  [#]------->Means you created an Array!!
    sum = 0.0;
    
    //Get User Input
    cout << "Enter student grades one at a time: " << endl;
    
    for (int i = 0; i < 20; i++)
    {
        cout << "Enter a grade for a student # " << i + 1 << endl;
        cin >> grade[i];
        sum += grade[i];
    }
    
    avg = sum / 20;
    
    cout << showpoint << fixed << setprecision(2);
    cout << "Average grade for this class = " << avg << endl;
    
    //Display Grades
    for (int i = 0; i < 20; i++)
        cout << "Grade for student " << i + 1 << " = " << grade[i] << endl;
    return 0;
}
