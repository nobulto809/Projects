#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int MONTH = 12;

struct RAINFALL
{
    double totRainfall;
    double highTemp;
    double lowTemp;
    double avgTemp;
};

void getData(RAINFALL[]);
void getTotRain(RAINFALL[]);
void getAvgMonthRain(RAINFALL);
void getHighTemp(RAINFALL);
void getLowTemp(RAINFALL);
void getAvgRainTemp(RAINFALL);






int main()
{
    RAINFALL year[MONTH];
    
    for (int i = 0; i < MONTH; i++)
    {
        cout << "Enter the amount of rain for Month " << i + 1 << ": ";
        cin >> year[i].totRainfall;
        
        cout << "\nEnter the highest temperature for that Month: ";
        cin >> year[i].highTemp;
        while (year[i].highTemp < -100 || year[i].highTemp > 140)
        {
            cout << "\nThe temperature you have entered has to be with in the range of the -100 through 140.\n";
            cin >> year[i].highTemp;
        }
        
        cout << "\nEnter the lowest temperature for that Month: ";
        cin >> year[i].lowTemp;
        while (year[i].lowTemp < -100 || year[i].lowTemp > 140)
        {
            cout << "\nThe temperature you have entered has to be with in the range of the -100 through 140.\n";
            cin >> year[i].lowTemp;
        }
        cout << "\n";
        
        year[i].avgTemp = (year[i].highTemp + year[i].lowTemp) / 2;
        
    }
    
    double totRain = 0;
    for (int i = 0; i < MONTH; i++)
    {
        totRain += year[i].totRainfall;
    }
    
    double avgMonthRain = totRain / MONTH;
    
    double avgTotRainTemp = 0, avg;
    
    for (int i = 1; i < MONTH; i++)
    {
        avgTotRainTemp += year[i].avgTemp;
    }
    avg = avgTotRainTemp / MONTH;
    
    double high, highMonth = 0.0, low, lowMonth = 0.0;
    high = year[0].highTemp;
    low = year[0].lowTemp;
    for (int i = 0; i < MONTH; i++)
    {
        if (year[i].highTemp > high)
        {
            high = year[i].highTemp;
            highMonth = i;
        }
        
        if (year[i].lowTemp < low)
        {
            low = year[i].lowTemp;
            lowMonth = i;
        }
    }
    
    
    cout << "\nTotal Rainfall: " << totRain << "\n\n";
    cout << "Avg Monthly rain: " << avgMonthRain << "\n\n";
    cout << "Avg Total Rain Temperature for the year: " << avg << "\n\n";
    cout << "Highest Temperature: " << high << " on Month " << (highMonth + 1) << "\n\n";
    cout << "Lowest Temperature: " << low << " on Month " << (lowMonth + 1) << "\n\n";
    
    return 0;
}















