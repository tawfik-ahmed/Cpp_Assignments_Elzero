
#include <iostream>
using namespace std;
int main ()
{



int help_num = 4;
int nums[] = {2, 4, 5, 6, 10};
for (int i = help_num - help_num; i < size(nums); i++)
{
cout << nums[i] << " + " << nums[help_num] << " = " << nums[i] + nums[help_num] << endl;
help_num--;
}


// Output Needed
// "2 + 10 = 12"
// "4 + 6 = 10"
// "5 + 5 = 10"
// "6 + 4 = 10"
// "10 + 2 = 12"

return 0;
}