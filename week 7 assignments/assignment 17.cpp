
#include <iostream>
using namespace std;
int main ()
{

for (int i = 1; i < 103; i++)
{
if (i < 10)
cout << "00" << i << endl;
if (i >= 10 && i < 21)
cout << "0" << i << endl;
if (i > 20 && i < 100)
continue;
if ( i > 99)
cout << i << endl;
}
/* Output Needed
001
002
003
004
005
006
007
008
009
010
011
012
013
014
015
016
017
018
019
020
100
101
102*/

return 0;
}

