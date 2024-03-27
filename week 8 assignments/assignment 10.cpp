#include <iostream>
using namespace std;

// Write Your Function Here
int minpositive(int numbers[], int numssize)
{
    int result = 0;
for (int i = 0; i < numssize; i++)
{
    if (numbers[i] > 0)
    {
        if (numbers[i] < numbers[i + 1] || numbers[i] < numbers[i - 1] )
        result = numbers[i];
    }
    
}
return result;
}
int main()
{
  int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0 }; // 5
  int numssize = size(numbers);
  cout << minpositive(numbers, numssize) << "\n";
  return 0;
}