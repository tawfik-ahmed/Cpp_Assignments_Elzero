
#include <iostream>
using namespace std;
int main ()
{

for (int i = 0; i < 19; i++)
{
if (i == 10 || i == 12)
continue;
if (i % 2 == 0)
cout << i << endl;
}
int x = 0;
while (x < 19)
{
if (x < 10 || x > 12)
cout << x << endl;

x += 2;
}

return 0;
}
/* Output Needed
0
2
4
6
8
14
16
18
*/