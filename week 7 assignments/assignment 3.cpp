
#include <iostream>
using namespace std;
int main ()
{
int num1, num2;
cout << "Enter First Number : ";
cin >> num1;
cout << "Enter Twice Number : ";
cin >> num2; cout << "\n"; cout << "Result Is : ";
while (true)
{
if (num1 > num2)
{
num2++;
if (num2 % 2 == 0)
continue;
if (num1 == num2)
{
break;}
cout << num2 << ", ";
}

if (num2 > num1)
{
num1++;
if (num1 % 2 == 0)
continue;
if (num1 == num2)
{
break;}
cout << num1 << ", ";
}
}

return 0;
}
/*
  Test Case 1
  Number One: 1
  Number Two: 9
  Output: 3, 5, 7

  Test Case 2
  Number One: 2
  Number Two: 15
  Output: 3, 5, 7, 9, 11, 13

  Test Case 3
  Number One: 8
  Number Two: 2
  Output: 3, 5, 7
*/

