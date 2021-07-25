#include <iostream>
using namespace std;

double calculateCostPrice(string, int, int);

int main()
{
    string day = "";
    int time = 0, duration = 0;
    double price;

    day = "Fri";
    time = 1400;
    duration = 22;

    price = calculateCostPrice(day, time, duration);

    cout << "This call will cost $" << price << endl;

    return 0;
}

double calculateCostPrice(string day, int time, int duration)
{
    double cost = 0.0;

    if(time >= 800 && time <= 1800)
    {
        if(day != "Sat")
        {
            if(day != "Sun")
            {
                cost = duration * 0.40;
            }
            else
            {
                cost = duration * 0.15;
            }
        }
        else
        {
            cost = duration * 0.15;
        }
    }

    else if(time <= 800 || time >= 1800)
    {
        if(day != "Sat")
        {
            if(day != "Sun")
            {
                cost = duration * 0.25;
            }
            else
            {
                cost = duration * 0.15;
            }
        }
        else
        {
            cost = duration * 0.15;    
        }
    }
    return cost;
}