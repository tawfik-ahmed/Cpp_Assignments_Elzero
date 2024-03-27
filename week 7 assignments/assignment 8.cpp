
#include <iostream>
using namespace std;
int main ()
{

for (int i = 2; i < 127; i += i + 2)
cout << i << endl;

int x = 2;
while (x < 127)
{
cout << x << endl;
x = x + x + 2;
}
/* Output Needed
2
6
14
30
62
126*/
return 0;
}
