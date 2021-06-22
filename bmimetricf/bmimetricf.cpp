#include <iostream>
#include <cmath>
using namespace std;

// comment out all but funcion bmimetricf for grading purposes
float bmimetricf(int weight, float height);

int main() {
    int weight;
    float bmiResult, height;

    weight = 50;
    height = 1.58;

    bmiResult = bmimetricf(weight, height);

    cout<<"BMI is: "<<bmiResult<<endl;

    return 0;
}

float bmimetricf(int weight, float height){
    float result;
    result = weight/(height * height);
    result = round (result * 100.0 ) / 100.0;
    return result;
}