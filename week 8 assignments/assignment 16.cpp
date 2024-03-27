#include <iostream>
using namespace std;

// Write Your Function Here
int books(int smaal_books, int middle_books, int big_books, int Shelves)
{
int size_small_books = smaal_books *= 2, size_middle_books = middle_books *= 4,
size_big_books = big_books *= 6, size_Shelves = Shelves * 20,
total = size_small_books + size_middle_books + size_big_books;
if (total > size_Shelves)
return 0;
return size_Shelves - total;
}

int main()
{
  cout << books(10, 4, 3, 4) << "\n"; // 26
  cout << books(10, 4, 3, 2) << "\n"; // 0
  return 0;
}