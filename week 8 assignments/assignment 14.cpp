#include <iostream>
using namespace std;

// Write Your Function Here
int calculate(int num1, int num2, string operation = "a")
{
  cout << "Operation ==> Add, Subtract, And Multiply You Can Enter Once letter Only \n";
  cout << "Enter The Operation : ";
  cin >> operation;
int result = 0;
if (operation == "a" || operation == "add")
result = num1 + num2;
else if (operation == "s" || operation == "subtract")
result = num1 - num2;
else if (operation == "m" || operation == "multiply")
result = num1 * num2;
else
{ 
  cout << "Error \n";
result = 0;
}
  return result;
}
int main()
{
  cout << calculate(10, 20) << "\n"; // 30
  cout << calculate(10, 20, "a") << "\n"; // 30
  cout << calculate(10, 20, "s") << "\n"; // -10
  cout << calculate(10, 20, "subtract") << "\n"; // -10
  cout << calculate(10, 20, "multiply") << "\n"; // 200
  cout << calculate(10, 20, "m") << "\n"; // 200
  cout << calculate(10, 20, "Invalid") << "\n"; // 0
  return 0;
}