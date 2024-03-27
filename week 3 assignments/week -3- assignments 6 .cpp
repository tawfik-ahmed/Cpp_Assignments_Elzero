
#include <iostream>
using namespace std;
int main()
{
int a = 69;
int b = 108;
int c = 122;
int d = 101;
int e = 114;
int f = 111;

cout << "\"Character Of This ASCII Value " << int(a) << " Is " << char(a) << "\"\n";
cout << "\"Character Of This ASCII Value " << int(b) << " Is " << char(b) << "\"\n";
cout << "\"Character Of This ASCII Value " << int(c) << " Is " << char(c) << "\"\n";
cout << "\"Character Of This ASCII Value " << int(d) << " Is " << char(d) << "\"\n";
cout << "\"Character Of This ASCII Value " << int(e) << " Is " << char(e) << "\"\n";
cout << "\"Character Of This ASCII Value " << int(f) << " Is " << char(f) << "\"\n";

cout << "\"" << char(69) << char(108) << char(122) << char(101) << char(114) << char(111) << "\"";
return 0;
}