
#include <iostream>
using namespace std;
int main ()
{

for (int i = 2; i < 129; i*=2)
cout << i << endl;

int x = 2;
while (x < 129)
{
cout << x << endl;
x*=2;
}
/* Output Needed
2
4
8
16
32
64
128*/
return 0;
}