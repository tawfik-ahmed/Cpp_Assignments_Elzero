
#include <iostream>
using namespace std;
int main ()
{

string names[] = {"Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa"};
for (int i = 0; i < size(names); i++)
{
if (size(names[i]) == 5)
cout << names[i] << endl;
}
// Output Needed
// "Osama"
// "Ahmed"
// "Hagar"
// "Salwa"

return 0;
}