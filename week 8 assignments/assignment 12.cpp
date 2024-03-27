#include <iostream>
using namespace std;

// Write Your Function Here
string createurl(string proto, string name_site, string domain, bool option = true)
{
  string msg = "://";
  string msg2 = "www";
  string msg3 = ".";
string url = "";
if (option == true)
url = proto + msg + msg2 + msg3 + name_site + msg3 + domain;
else 
url = proto + msg + name_site + msg3 + domain;


return url;
}

int main()
{
  cout << createurl("https", "elzero", "org") << "\n"; // https://www.elzero.org
  cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
  cout << createurl("http", "learn", "net") << "\n"; // http://www.learn.net
  return 0;
}