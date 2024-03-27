
#include <iostream>
using namespace std;

int main()
{

int age = 40;
int points = 100;

if (age > 18 && points > 50 && sizeof(age) == 4)
  cout << "Age Data Is 4 Bytes \n" << "Age Is Ok  \n" << "Points Is Ok";

// Output Needed
/*"Age Data Is 4 Bytes"
"Age Is Ok"
"Points Is Ok"*/

return 0;
}