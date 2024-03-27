#include <iostream>
using namespace std;

int main()
{
  double salary = 5000.98;
cout << sizeof(salary) << " Bytes \n"; // 8 Bytes
cout << sizeof(salary) * sizeof(salary) << " Bits \n";// 64 Bits
return 0;
}