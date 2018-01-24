/*  Programmer: Jeffrey Guzman
 Date: 11/2/2017
 Purpose: Homework
 Description: To figure out how many students are in a class and which student according to their first name will
 be first or last when they line up in a single file line.
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    //Variables
    int count;
    int numStu;
    string largest;
    string smallest;
    string name;
    
    //Get user input
    cout << "Enter how many students you have between 1 and 20: \n";
    cin >> numStu;
    
    while (numStu < 1 || numStu > 20)
    {
        cout << "Invalid numbered entered for the amount of students! Try again: \n";
        cin >> numStu;
    }
    
    //cin.ignore();
    
    cout << "What's your name? \n";
    cin >> name;
    
    largest = name;
    smallest = name;
    
    for (int count = 2; count <= numStu; count++)
    {
        cout << "What's your name? \n";
        cin >> name;
        
        
        if (name < largest)
        {
            largest = name;
        }
        if (name > smallest)
        {
            smallest = name;
        }
    }
    
    cout << "\n" << largest << " is in front of the line.\n";
    cout << smallest << " is in the back of the line.\n\n";
    
    return 0;
}
