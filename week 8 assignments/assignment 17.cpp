#include <iostream>
using namespace std;

// Write Your Function Here
float pricing(int phone_will_sell, int phone_used, int price, float Taxes)
{

int new_sell = (phone_will_sell - phone_used), price_new_sell = new_sell * price,
price_used_sell = phone_used * (price - 200), total = price_new_sell + price_used_sell;
float newTaxes = Taxes / 100, total_Taxes = total * newTaxes;


    return total - total_Taxes;
}

int main()
{
  cout << pricing(50, 10, 800, 20) << "\n"; // 30400
  return 0;
}