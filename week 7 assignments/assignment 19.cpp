
#include <iostream>
using namespace std;
int main ()
{
for (int i = 100; i < 1200; i += 100)
{
if (i == 100 || i == 1100)
{
cout << i << endl;
continue;
}
cout << i << endl << i << endl;
}
/*Output Needed
100
200
200
300
300
400
400
500
500
600
600
700
700
800
800
900
900
1000
1000
1100*/

return 0;
}