
#include <iostream>
using namespace std;
int main ()
{


int index = 10;
int jump = 2;

for (;;)
{
    if (index == jump)
    break;
cout << index << endl;
index -= jump;
  // Write Your Code Here
}

// Output Needed
// 10
// 8
// 6
// 4
return 0;
}