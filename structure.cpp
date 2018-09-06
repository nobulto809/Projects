/* Sample using a structure*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
//Structure declaration
const int SIZE = 2;
struct GradDate
{
    int month;
    int year;
};
struct Student
{
    string name;
    int IdNumber;
    double credits;
    double gpa;
    GradDate Date;
};

Student info[SIZE];

//Function Prototypes
void getData(Student[]);
void displayData(Student[]);
int main()
{
    //Function Calls
    getData(info);
    displayData(info);
    return 0;
}
void getData(Student info[])
{
    //Read data into info using a loop
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter a student name: " << endl;
        getline(cin, info[i].name);
        cout << "Enter Id number, credits, and gpa for this student:" << endl;
        cin >> info[i].IdNumber >> info[i].credits >> info[i].gpa;
        cout << "Enter a graduation date (month followed by year) for the student " << endl;
        cin >> info[i].Date.month >> info[i].Date.year;
        cin.ignore();
    }
}
void displayData(Student[])
{
    //Display information
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Student Name:     " << info[i].name
        << "\nStudent ID:      " << info[i].IdNumber
        << "\nStudent Credits: " << info[i].credits
        << "\nStudent GPA:     " << info[i].gpa
        << "\nGraduation Date: " << info[i].Date.month <<"/" << info[i].Date.year << endl << endl;
    }
}
