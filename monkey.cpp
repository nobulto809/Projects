/*  Monkey Business Homework */
#include <iostream>
#include <iomanip>
using namespace std;

const int Monkeys = 3;
const int Days = 7;
double zoo[Monkeys][Days];
double MonkeyFood[Monkeys] = { 0 };
double dailyFood[Days] = { 0 };
double min, max, avg;
void getData(double zoo[][Days]);
void getMonkeyFood(double zoo[][Days], double MonkeyFood[]);
void getDailyFoodTotal(double zoo[][Days], double dailyFood[]);
void DisplayResult(double zoo[][Days], double MonkeyFood[], double dailyFood[]);
void getAvg(double zoo[Monkeys][Days]);
void getLeast(double zoo[Monkeys][Days]);
void getGreatest(double zoo[Monkeys][Days]);

int main()
{
    getData(zoo);
    getMonkeyFood(zoo, MonkeyFood);
    getDailyFoodTotal(zoo, dailyFood);
    DisplayResult(zoo, MonkeyFood, dailyFood);
    getAvg(zoo);
    getLeast(zoo);
    getGreatest(zoo);
    return 0;
}

void getData(double zoo[][Days])
{
    for (int i = 0; i < Monkeys; i++)
    {
        for (int j = 0; j < Days; j++)
        {
            cout << "Enter how many pounds of food for day " << j + 1 << " for monkey # " << i + 1 << endl;
            cin >> zoo[i][j];
        }
    }
}


void getMonkeyFood(double zoo[][Days], double MonkeyFoos[])
{
    for (int i = 0; i < Monkeys; i++)
        for (int j = 0; j < Days; j++)
        {
            MonkeyFood[i] += zoo[i][j];
        }
}

void getDailyFoodTotal(double zoo[][Days], double dailyFood[])
{
    for (int j = 0; j < Days; j++)
        for (int i = 0; i < Monkeys; i++)
        {
            dailyFood[j] += zoo[i][j];
        }
}

void DisplayResult(double zoo[][Days], double MonkeyFood[], double dailyFood[])
{
    cout << "\n\n";
    cout << "Monkey  \tMonday\tTuesday\t  Wed\tThurs\tFriday\t  Sat\t  Sun\tTotal\n";
    cout << "-----------------------------------------------------------------------\n";
    for (int i = 0; i < Monkeys; i++)
    {
        cout << "\t" << i + 1 << "\t\t";
        for (int j = 0; j < Days; j++)
        {
            cout << "   " << zoo[i][j] << "\t";
        }
        
        cout << MonkeyFood[i] << "\n\n";
    }
    
    cout << "Total = ";
    for (int j = 0; j < Days; j++)
        cout << "\t   " << dailyFood[j];
    cout << "\n\n";
}

void getAvg(double zoo[Monkeys][Days])
{
    double totalFood = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            totalFood += zoo[i][j];
        }
    }
    avg = totalFood / (3 * 7);
    cout << showpoint << fixed << setprecision(2);
    cout << "Average food eaten by all of the monkeys: " << avg << "\n\n";
}

void getLeast(double zoo[Monkeys][Days])
{
    double least = zoo[0][0];
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (zoo[i][j] < least)
            {
                least = zoo[i][j];
            }
        }
    }
    cout << "Least amount of food eaten: " << least << "\n\n";
}


void getGreatest(double zoo[Monkeys][Days])
{
    double most = zoo[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (zoo[i][j] > most)
            {
                most = zoo[i][j];
            }
        }
    }
    cout << "Greatest amount of food eaten: " << most << "\n\n";
}
