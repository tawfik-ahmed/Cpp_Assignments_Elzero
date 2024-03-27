
#include <iostream>
using namespace std;
int main ()
{

// Friends Array
string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};

for (int i = 0; i < 5; i++)
{
if (friends[i][0] == 'A')
cout << friends[i] << endl;
}
int x = 0;
while ( x < 5)
{
if (friends[x][0] == 'A')
cout << friends[x] << endl;
x++;
}
/*Output Needed
"Ahmed"
"Ashraf"
"Amany"*/
return 0;
}
