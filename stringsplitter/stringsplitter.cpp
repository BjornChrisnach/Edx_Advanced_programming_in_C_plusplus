#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string testStr = "Fortune favors the bold", subFirst = "", subLast = "";
    string middle = "";    

    cout << "Enter a test sentence with odd number of letters in it: ";
    getline(cin, testStr);

    int tmpStart = (testStr.length()/2);
    middle = testStr.substr(tmpStart,1);
    cout << "Middle character: " << middle << endl;
    
    subFirst = testStr.substr(0,tmpStart);
    subLast = testStr.substr(tmpStart + 1,testStr.length() - 1);
    
    cout << "First half: " << subFirst << endl;
    cout << "Second half: " << subLast << endl;
    
    return 0;
}