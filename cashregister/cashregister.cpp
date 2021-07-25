#include <iostream>
#include <cmath>
using namespace std;

double calculatePrice(double, double);

int main()
{
    double item1, item2, totalPrice;
    cout << "Please enter the price of the first item: ";
    cin >> item1;

    cout << "Please enter the price of the second item: ";
    cin >> item2;

    totalPrice = calculatePrice(item1, item2);

    cout << "Total price = " << totalPrice << endl;

    return 0;
}

double calculatePrice(double item1, double item2)
{
    float tax = 0.0;
    double price = 0.0, basePrice = 0.0, discountedPrice = 0.0;
    char cardResponse;

    basePrice = (double)item1 + (double)item2;

    if(item1 > item2)
    {
        item2 = item2/2;
    }
    else
    {
        item1 = item1/2;
    }

    price = item1 + item2;

    cout << "Does the customer have a club card? (Y/N): ";
    cin >> cardResponse;

    cout << "Please give in the tax rate: ";
    cin >> tax;

    if(cardResponse == 'Y' || cardResponse == 'y')
    {
       discountedPrice = (price - ((price / 100) * 10)); 
    }

    printf("Base price = %2.2f\n", basePrice);
    printf("Price after discounts = %2.2f\n",discountedPrice);

    if(cardResponse == 'Y' || cardResponse == 'y')
    {
        price = discountedPrice + ((discountedPrice / 100) * tax);    
    }
    else
    {
        price = price + ((price / 100) * tax);
    }
    
    price = round(price * 100) / 100;

    return price;
}