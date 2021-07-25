#include <iostream>
using namespace std;

bool isPrime(int num);

int main() 
{
    int inputValue = 0;
    bool evalPrime = false;

    cout<<"Please enter a positive number greater than 2: ";
    cin>>inputValue;

    evalPrime = isPrime(inputValue);
    if(evalPrime == true)
    {
        cout << "The number " << inputValue << ", you entered, is a prime number" << endl;
    }
    else
    {
        cout << "The number " << inputValue << ", you entered, is not a prime number" << endl;
    }
}

bool isPrime(int num)
{
    int countDivs;
    countDivs = 0;
    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            countDivs++;
        }
    }
    if(countDivs == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}