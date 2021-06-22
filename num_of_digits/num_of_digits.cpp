#include <iostream>
using namespace std;

int analyzeDigits(int num, int & outSum);

int main() {
    int numValue, countDigs, sumDigs;

    cout<<"Please enter a positive number:"<<endl;
    cin>>numValue;

    countDigs = analyzeDigits(numValue, sumDigs);

    cout<<numValue<<" has "<<countDigs<<" digits and their sum is "<<sumDigs<<endl;
    return 0;
}


int analyzeDigits(int num, int & outSum) {
    int currDig, count, sum;

    count = 0;
    sum = 0;
    while(num > 0) {
        currDig = num % 10;
        count ++;
        sum += currDig;
        num = num / 10;
    }
    outSum = sum;
    return count;
}