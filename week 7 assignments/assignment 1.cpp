
#include <iostream>
using namespace std;
int main ()
{
// For Output
for (int i = 0; i < 11; i++)
cout << i << endl;

// While Output
int nums = 0;
while (true)
{
cout << nums << endl;
nums++;
if (nums == 11)
break;
}

// Do While Output
int index = 0;
do {
cout << index << endl;
index++;
} while (index < 11);

return 0;
}