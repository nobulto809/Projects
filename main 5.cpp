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
    List *head, *temp, *n;
    
    //First Node
    n = new List;
    
    cout << "Enter a name: \n";
    getline(cin, n->name);
    
    cout << "Enter ID Number: \n";
    cin >> n->idNum;
    
    cout << "Enter the GPA: \n";
    cin >> n->GPA;
    
    cin.ignore();
    
    temp = n;
    head = n;
    
    for (int i = 1; i < 3; i++)
    {
        n = new List;
        
        cout << "Enter a name: \n";
        getline(cin, n->name);
        
        cout << "Enter ID Number: \n";
        cin >> n->idNum;
        
        cout << "Enter the GPA: \n";
        cin >> n->GPA;
            
        cin.ignore();
            
        temp->next = n;
        temp = temp->next;


    }
    
    n->next = NULL;
    
    cout << "\nFirst student is " << head->name
    << " with an ID Number of " << head->idNum
    << " has a GPA of " << head->GPA;
    
    
    
    for (int i = 1; i < 3; i++)
    {
        
        cout << "\n\nNext student is " << temp->name
        << " with an ID Number of " << temp->idNum
        << " has a GPA of " << temp->GPA << "\n\n";
        
        
    }
    
    
    return 0;
}
