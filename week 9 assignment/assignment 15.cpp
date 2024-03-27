#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> nums = { 1, 2, 3, 4, 5, 6, 7, 8 };

  // Your Code Here
// nums.erase(nums.begin(), nums.begin( ) + 4);
// nums.push_back(1);
// nums.push_back(2);
// nums.push_back(3);
// nums.push_back(4);
rotate(nums.begin(), nums.begin() + 4, nums.end());
  for (int i : nums)
  {
    cout << i << "\n";
  }
  return 0;
}

// Needed Output
// 5
// 6
// 7
// 8
// 1
// 2
// 3
// 4