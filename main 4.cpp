/* Use of pointer and dynamic allocations */
#include <iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    int i;
    int howMany;
    
    cout << "How many locations will you need? " << endl;
    cin >> howMany;
    
    //Allocate thisnspace dynamically
    ptr = new int[howMany];
    
    //Load values in
    for (i = 0; i < howMany; i++)
    {
        cout << "Enter value " << i + 1<< endl;
        cin >> *(ptr + i);
    }
    
    //Display these values
    cout << "The values entered are: " << endl;
    for (i = 0; i < howMany; i++)
    {
        cout << *(ptr + i) << "\t";
    }
    cout << endl;
    
    delete [] ptr;
    ptr = NULL;
    return 0;
    
}
