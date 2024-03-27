
#include <iostream>
using namespace std;

int main()
{

// Example 1
/*int vals[] = {100, 200, 600, 200, 100};
if (vals[0] == vals[4] & vals[1] == vals[3])
cout << "Array Is Palindrome" << endl;
else cout << "Array Is Not Palindrome";*/
/* Output
"Array Is Palindrome"*/

// Example 2
/*int vals[] = {100, 200, 200, 100};
if (vals[0] == vals[3] & vals[1] == vals[2])
cout << "Array Is Palindrome" << endl;
else cout << "Array Is Not Palindrome";*/
/* Output
"Array Is Palindrome"*/

// Example 3
int vals[] = {100, 300, 600, 200, 100};
if (vals[0] == vals[3] & vals[1] == vals[2])
cout << "Array Is Palindrome" << endl;
else cout << "Array Is Not Palindrome";
/* Output
"Array Is Not Palindrome"*/

return 0;
}