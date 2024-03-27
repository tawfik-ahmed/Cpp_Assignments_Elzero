
#include <iostream>
#include <array>
using namespace std;

int main()

{

  array<int, 6> nums = {10, 20, 30, 40, 20, 50};


  /* Method 1
  "First: 10"
  "Last: 50"*/
cout << " First: " << nums[0] << endl;
cout << " Last: " << nums[5] << endl;
  /* Method 2
  "First: 10"
  "Last: 50"*/
cout << " First: " << nums.front() << endl;
cout << " Last: " << nums.back() << endl;
  /* Method 3
  "First: 10"
  "Last: 50"*/
cout << " First: " << nums.at(0) << endl;
cout << " Last: " << nums.at(5) << endl;

return 0;
}