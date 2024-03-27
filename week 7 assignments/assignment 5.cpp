
#include <iostream>
using namespace std;
int main ()
{


for (int i = 0; i < 28; i += 3)
cout << i << endl;
int x = 0;
while (true)
{
cout << x << endl;
x += 3;
if (x > 27)
break;

}
/* Output Needed
0
3
6
9
12
15
18
21
24
27*/

return 0;
}