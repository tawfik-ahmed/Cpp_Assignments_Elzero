
#include <iostream>
using namespace std;
int main ()
{

// Friends Array
string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};
for (int i = 1; i < 3; i++)
cout << friends[i] <<  endl;

int x = 1;
while ( x < 3)
{
cout << friends[x] << endl;
x++;
}
/* Output Needed
"Mohamed"
"Sayed"*/

return 0;
}