
#include <iostream>
using namespace std;
int main ()
{

for (int i = 10;i < 100000001;i *=i)
cout << i << endl;

int x = 10;
while (x < 100000001)
{
cout << x << endl;
x *=x;
}
/* Output Needed
10
100
10000
100000000*/
return 0;
}