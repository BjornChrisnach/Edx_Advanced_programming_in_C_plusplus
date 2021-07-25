#include <iostream>
using namespace std;

int maxabsinlst(int[], int);

int main()
{
    int lst[] = { -19, -3, 20, -1, 5, -25 }, size = 0;
    size = sizeof(lst) / sizeof(int);

    printf("%i", maxabsinlst(lst, size));

    return 0;
}

int maxabsinlst(int lst[], int size)
{
    int maximum = 0, tmpAbs = 0;
    for(int i = 0; i < size; i++)
    {
        tmpAbs = (lst[i] * (-1));
        if(tmpAbs > maximum)
        {
            maximum = tmpAbs;
        }
    }
    return maximum;
}