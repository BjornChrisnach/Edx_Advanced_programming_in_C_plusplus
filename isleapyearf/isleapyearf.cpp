#include <iostream>
using namespace std;

// comment out all but funcion isleapyear for grading purposes
bool isleapyear(int year);

int main() {
    int testYear = 1900;
    if(isleapyear(testYear)){
        cout<<testYear<<" was a leap year"<<endl;
    }
    else {
        cout<<testYear<<" was not a leap year"<<endl;
    }
    return 0;
}

bool isleapyear(int year) {
    bool isLeapYear = false;
    if(year % 4 == 0){
        if(year % 100 != 0 && year % 400 == 0){
            isLeapYear = true;
            return isLeapYear;
        }
        else if(year % 100 == 0 && year % 400 != 0){
            isLeapYear = false;
            return isLeapYear;
        }
        isLeapYear = true;
        return isLeapYear;
    }
    else{
        isLeapYear = false;
        return isLeapYear;        
    }
}