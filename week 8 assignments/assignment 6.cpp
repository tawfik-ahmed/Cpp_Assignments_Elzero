#include <iostream>
#include <cctype>
using namespace std;

// Write Your Function Here
string swapping(string msg)
{
    int sizee = size(msg);
    string result = "";
    for (int i = 0; i < sizee; i++)
    {
        if (isupper(msg[i]) && msg[i] != 'H' )
        result += char(tolower(msg[i]));
        else if (islower(msg[i]) && msg[i] != 'h')
        result += char(toupper(msg[i]));
        else 
        result += char(msg[i]);
    }
    return result;
}

int main()
{
  cout << swapping("hero Of THe PROgramming") << "\n"; // hERO oF tHE proGRAMMING
  return 0;
}
