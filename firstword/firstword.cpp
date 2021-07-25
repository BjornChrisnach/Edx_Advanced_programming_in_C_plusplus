#include <iostream>
#include <string>
// #include <vector>
// #include <sstream>
// #include <iterator>

using namespace std;

string firstword(string s);

int main()
{
    cout << firstword("The quick brown fox");

    return 0;
}

string firstword(string s)
{
    // vector<string> splitWords;
    // istringstream iss(s);
    // copy(istream_iterator<string>(iss),
    //      istream_iterator<string>(),
    //      back_inserter(splitWords));
    // return splitWords[0];
    string firstWord = s.substr(0, s.find(" "));
    return firstWord;
}