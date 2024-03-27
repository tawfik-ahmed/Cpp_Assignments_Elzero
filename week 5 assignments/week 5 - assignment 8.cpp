
#include <iostream>
using namespace std;

int main()
{

/*
1982 =>"My Birth Day"
1989 => "My First Work"
1995 => "Windows 95"
2000 => "Windows Millennium"
2002 => "Creat My vBulletin Forum"
Any Other Year => "No Events in This Year"
*/

int year;
cout << "Please Enter A Year : ";
cin >> year;
switch (year)
{
case 1982:
cout << "My Birth Day";
break;
case 1989:
cout << "My First Work";
break;
case 1995:
cout << "Windows 95";
break;
case 2000:
cout << "Windows Millennium";
break;
case 2002:
cout << "Creat My vBulletin Forum";
break;
default:
cout << "No Events in This Year";
}
return 0;
}