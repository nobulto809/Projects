/*Sample for HW2*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Funnction Prototypes
double getSales(string);
void findhighest(double, double, double, double);
void findlowest(double, double, double, double);

int main()
{
    //Variables
    double salesNE, salesNW, salesSE, salesSW;
    
    //Call Functions
    salesNE = getSales("North East");
    salesNW = getSales("North West");
    salesSE = getSales("South East");
    salesSW = getSales("South West");
    
    findhighest(salesNE, salesNW, salesSE, salesSW);
    findlowest(salesNE, salesNW, salesSE, salesSW);
    return 0;
}

//Function Declarations
double getSales(string divName)
{
    double sales;
    cout << "Enter the quarterly sales for the " << divName << " division.\n";
    cin >> sales;
    while (sales < 0)
    {
        cout << "Illegal sales entered. Must enter a positive value: \n";
        cin >> sales;
    }
    
    return sales;
}

void findhighest(double salesNE, double salesNW, double salesSE, double salesSW)
{
    double highestSales;
    string bestDivision;
    
    highestSales = salesNE;
    bestDivision = "North East";
    
    if(salesNW > salesNE)
    {
        highestSales = salesNW;
        bestDivision = "North West";
    }
    
    if(salesSE > salesNE)
    {
        highestSales = salesSE;
        bestDivision = "South East";
    }
    
    if(salesSW > salesNE)
    {
        highestSales = salesSW;
        bestDivision = "South West";
    }
    
    cout << fixed << showpoint << setprecision(2);
    cout << "The highest sales from division " << bestDivision << " = $"
    << highestSales << endl << endl << endl;
    
}

void findlowest(double salesNE, double salesNW, double salesSE, double salesSW)
{
    double lowestSales;
    string worstDivision;
    
    lowestSales = salesNE;
    worstDivision = "North East";
    
    if(salesNW < salesNE)
    {
        lowestSales = salesNW;
        worstDivision = "North West";
    }
    
    if(salesSE < salesNE)
    {
        lowestSales = salesSE;
        worstDivision = "South East";
    }
    
    if(salesSW < salesNE)
    {
        lowestSales = salesSW;
        worstDivision = "South West";
    }
    
    cout << fixed << showpoint << setprecision(2);
    cout << "The lowest sales from division " << worstDivision << " = $"
    << lowestSales << endl << endl << endl;
    
}
