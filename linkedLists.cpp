#include <iostream>
#include <string>
using namespace std;

struct List
{
    string name;
    int idNum;
    double GPA;
    List *next;
};

int main()
{
    List *head = nullptr;
    
    //First Node
    head = new List;
    
    cout << "Enter a name: \n";
    getline(cin, head->name);
    
    cout << "Enter ID Number: \n";
    cin >> head->idNum;
    
    cout << "Enter the GPA: \n";
    cin >> head->GPA;
    
    cin.ignore();
    
    //Second Node
    List *second = new List;
    
    head->next = second;
    
    cout << "Enter a name: \n";
    getline(cin, head->next->name);
    
    cout << "Enter ID Number: \n";
    cin >> head->next->idNum;
    
    cout << "Enter the GPA: \n";
    cin >> head->next->GPA;
    
    second->next = nullptr;
    
    cout << "\nFirst student is " << head->name
         << " with an ID Number of " << head->idNum
         << " has a GPA of " << head->GPA;
    cout << "\n\nSecond student is " << head->next->name
         << " with an ID Number of " << head->next->idNum
         << " has a GPA of " << head->next->GPA << "\n\n";
    
    return 0;
}
