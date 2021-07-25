#include <iostream>

using namespace std;

int main()
{
    char inputChar;
    cout << "Enter a character: ";
    cin >> inputChar;

    if (inputChar >= 48 && inputChar <= 57)
    {
        cout << inputChar << " is a digit." << endl;
    }
    else if (inputChar >= 65 && inputChar <= 90)
    {
        cout << inputChar << " is a upper case case letter." << endl;
    }
    else if (inputChar >= 97 && inputChar <= 122)
    {
        cout << inputChar << " is a lower case letter." << endl;
    }
    else
    {
        cout << inputChar << " is a non-alphanumeric character." << endl;
    }

    return 0;
}