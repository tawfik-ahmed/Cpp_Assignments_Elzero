#include <iostream>
using namespace std;

// Write Your Function Here
int plusandmultiply(int numbers[], int numssize)
{
int EvenNums = 0;
int OddNums = 1;
int Total;
for (int i = 0; i < numssize; i++)
{
    if (numbers[i] % 2 == 0)
    EvenNums += numbers[i];
    if (numbers[i] % 2 != 0)
    OddNums *= numbers[i];
}
Total = EvenNums + OddNums;
cout << EvenNums << endl;
cout << OddNums << endl;
return Total;
}

int main()
{
  int numbers[] = { 10, 20, 3, 30, 5, 7, 40 };
  int numssize = size(numbers);
  cout << plusandmultiply(numbers, numssize) << "\n";
  // Even Numbers -> 10 + 20 + 30 + 40 = 100
  // Odd Numbers  -> 3 * 5 * 7 = 105
  // Total = 100 + 105 = 205
  return 0;
}