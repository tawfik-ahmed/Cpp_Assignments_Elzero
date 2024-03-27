
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
vector<int> numbers = { 10, 20, 30, 40 };
vector<int>::iterator i = numbers.begin();
vector<int>::iterator y = (numbers.end() - 1);
cout << numbers.at(0) << "\n";
cout << numbers.front() << "\n";
cout << *i << "\n";
cout << *numbers.begin() << "\n";
cout << *(numbers.end() - 1) << "\n";
cout << numbers.back() << "\n";
cout << numbers.at(size(numbers) - 1) << "\n";
cout << *y << "\n";
return 0;
}