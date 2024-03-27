
#include <iostream>
using namespace std;

int main()
{

// Test Case 1
int age = 20;
int points = 650;

if ( age <= 18 && points < 500 )
{
cout << "No Age Is Not Ok\n";
cout << "No Points Is Not Ok\n";
}
/*Output
"No Age Is Not Ok"
"No Points Is Not Ok"
// Test Case 2
int age = 20;
int points = 450;*/
else if (age > 18 && points < 500)
{
cout << "Yes Age Is Ok \n";
cout << "No Points Is Not Ok\n";
}
/*Output
"Yes Age Is Ok"
"No Points Is Not Ok"

// Test Case 3
int age = 20;
int points = 650;*/
else if (age > 18 && points > 500)
{
cout << "Yes Age Is Ok\n";
cout << "Yes Points Is Ok\n";
}
/* Output
"Yes Age Is Ok"
"Yes Points Is Ok"*/

return 0;
}
