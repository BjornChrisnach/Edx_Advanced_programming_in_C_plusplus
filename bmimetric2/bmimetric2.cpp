#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// comment out all but function bmimetricf for grading purposes
float bmimetricf(int weight, float height);

int main() 
{
    int weight;
    float bmiResult, height;
    string cdc = "";

    weight = 50;
    height = 1.58;

    bmiResult = bmimetricf(weight, height);

    if(bmiResult < 18.5)
    {
        cdc = "Underweight";
    }
    else if(bmiResult >= 18.5 && bmiResult <= 24.9)
    {
        cdc = "Normal";
    }
    else if(bmiResult >= 25 && bmiResult <= 29.9)
    {
        cdc = "Overweight";
    }
    else if(bmiResult >= 30)
    {
        cdc = "Obese";
    }

    cout << "BMI is: " << bmiResult << ", status is " << cdc << endl;

    return 0;
}

float bmimetricf(int weight, float height)
{
    float result;
    result = weight/(height * height);
    result = round (result * 100.0 ) / 100.0;
    return result;
}