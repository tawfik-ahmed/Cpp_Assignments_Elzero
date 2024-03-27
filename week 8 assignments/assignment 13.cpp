#include <iostream>
using namespace std;

// Write Your Function Here
string greeting(string name, string type = "")
{
    string msg = "Hello";
    if (type == "Male")
    {
    type = "Mr";
    return msg + " " + type + " " + name;
    }
    else if (type == "Female")
    {
    type = "Miss";
    return msg + " " + type + " " + name;
    }
    else
    return msg + " " + name;
}

int main()
{
  cout << greeting("Osama", "Male") << "\n"; // Hello Mr Osama
  cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
  cout << greeting("Sameh") << "\n"; // Hello Sameh
  return 0;
}