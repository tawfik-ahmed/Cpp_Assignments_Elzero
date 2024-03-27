
#include <iostream>
using namespace std;
int main ()
{

// Friends Array
string friends[] = {"Ahmed", "Osama", "Ameer"};

for (int i = 0; i < 3; i++)
{

cout << "=========\n";
cout << "= " << friends[i] << " =\n";
cout << "==================\n== ";
for (int x = 0; x < 5; x++)
{
cout << friends[i][x];
if ( x != 4)
cout <<  ", ";
}
cout << " =\n================== \n\n";
}

/* Output Needed
=========
= Ahmed =
==================
== A, h, m, e, d =
==================

=========
= Osama =
==================
== O, s, a, m, a =
==================

=========
= Ameer =
==================
== A, m, e, e, r =
==================
*/

return 0;
}
