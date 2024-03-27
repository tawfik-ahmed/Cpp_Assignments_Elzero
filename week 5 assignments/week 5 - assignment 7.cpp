
#include <iostream>
using namespace std;

int main()
{

int result = 0;
int num1, num2, num3, num4;
cout << "Please Type 5 Numbers In A Row\n";
cout << "Only Even Numbers Smaller Than 20 Will Be Counted\n";
cin >> num1 >> num2 >> num3 >> num4;

if (num1 < 20 && num1 % 2 == 0 )
{
cout << "The Result 1 Is : ";
result = result + num1;
cout << result << "\n";
}
else 
{
cout << "The Result 1 Is : " << result;
cout << "\n";
}
if (num2 < 20 && num2 % 2 == 0)
{
cout << "The Result 2 Is : ";
result = result + num2;
cout << result << "\n";
}
else 
{
cout << "The Result 2 Is : " << result;
cout << "\n";
}
if (num3 < 20 && num3 % 2 == 0)
{
cout << "The Result 3 Is : ";
result = result + num3;
cout << result << "\n";
}
else 
{
cout << "The Result 3 Is : " << result;
cout << "\n";
}
if (num4 < 20 && num4 % 2 == 0)
{
cout << "The Result 4 Is : ";
result = result + num4;
cout << result << "\n";
}
else 
{
cout << "The Result 4 Is : " << result;
cout << "\n";
}
cout << "\n==============================\n\n";
cout << "The Finally Result Is " << result;
cout << "\n\n==============================\n";

/*
  Test Case 1
  Numbers => 15, 16, 22, 8
  Result => 24

 Test Case 2
  Numbers => 100, 11, 12, 18
  Result => 30*/


return 0;
}