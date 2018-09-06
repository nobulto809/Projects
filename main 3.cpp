/*  Programmer: Jeffrey Guzman
    Date: 3/13/18
    Description: MIDTERM
    Purpose: The user enters an ID number which is then searched through an array list
            which then prints out other sections of other array list.
*/
#include <iostream>
#include <iomanip>
using namespace std;

void getID(int);

const int ids[5] = {10, 14, 34, 45, 78};
const int prices[5] = {125, 600, 250, 350, 225};
const int quantities[5] = {5, 3, 9, 10, 2};

int main()
{
    int id;
    int stop = 9999;
    
    cout << "Please enter the product ID \n";
    cin >> id;
    
    while (id != stop)
    {
        getID(id);
        cout << "Please enter the product ID or type 9999 to stop!\n";
        cin >> id;
    }
}

void getID(int id)
{
    for (int i = 0; i < ids[i]; i++)
    {
        if (id == ids[i])
        {
            cout << "\nThe product number " << id << " has a price of $" << prices[i] << " with a quantity of " << quantities[i] << ".\n\n";
        }
    }
}
