#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iterator>

using namespace std;

string firstword(string s);

int main()
{
    cout << firstword("The quick brown fox");

    return 0;
}

string firstword(string s)
{
    string output = "";
    vector<string> splitWords;
    istringstream iss(s);
    copy(istream_iterator<string>(iss),
         istream_iterator<string>(),
         back_inserter(splitWords));
    for (int i = 1; i < splitWords.size(); i++)
    {
        output = output + splitWords[i] + " ";
    }

    return output;
}