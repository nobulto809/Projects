/*  Midterm Solution  */
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int ids[SIZE] = {10, 14, 34, 45, 78};
    int prices[SIZE] = {125, 600, 250, 350, 225};
    int quantities[SIZE] = {5, 3, 9, 10, 2};
    int productID;
    bool found;
    int location;
    char again = 'y';
    while (again == 'y' || again == 'Y')
    {
        cout << "Enter product ID" << endl;
        cin >> productID;
        
        found = false;
        location = 0;
        
        while (location < SIZE && !found)
        {
            if (productID == ids[location])
                found = true;
            else
                location++;
        }
        
        if (location >= SIZE)
            cout << "Product ID is not listed." << endl;
        else
            cout << "The quantity = " << quantities[location] << endl
                 << "The price = " << prices[location] << endl;
        
        cout << "Would you like to ru this program again? (ENTER (y or Y) for yes)" << endl;
        cin >> again;
        cout << endl;
    }
    return 0;
    
}
