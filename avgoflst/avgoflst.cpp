#include <iostream>
using namespace std;

float avgoflst(int[], int);

int main()
{
    int lst[] = { 19, 2, 20, 1, 0, 18 }, size = 0;
    size = sizeof(lst) / sizeof(int);

    printf("%3.0f", avgoflst(lst, size));

    return 0;
}

float avgoflst(int lst[], int size)
{
    int sum = 0;
    float average;
    for(int i = 0; i < size; i++)
    {
        sum += lst[i];
    }
    average = (float)sum / (float)size;
    return average;
}