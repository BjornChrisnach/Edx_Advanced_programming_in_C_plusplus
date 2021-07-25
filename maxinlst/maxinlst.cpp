#include <iostream>
using namespace std;

int maxinlst(int[], int);

int main()
{
    int lst[] = { -19, -3, 20, -1, 5, -25 }, size = 0;
    size = sizeof(lst) / sizeof(int);

    printf("%i", maxinlst(lst, size));

    return 0;
}

int maxinlst(int lst[], int size)
{
    int maximum = 0;
    for(int i = 0; i < size; i++)
    {
        if(lst[i] > maximum)
        {
            maximum = lst[i];
        }
    }
    return maximum;
}