#include <iostream>
#include <cmath>
using namespace std;

// Write Your Function Here
void thepower(int x, int y)
{
    int z;
    cout << pow(x, y) << endl;
    int result = 1;
    for (int i = 0; i < 5; i++)
    {
result *= x;
    }
    cout << result << endl;
}

int main()
{
  thepower(2, 5); // 32
  return 0;
}