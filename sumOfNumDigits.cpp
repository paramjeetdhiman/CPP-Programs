#include <bits/stdc++.h>
using namespace std;

int main() {
  int num{}, sum{}, last_digit{};
  cin >> num;

  while (num != 0) {
    last_digit = num % 10;  // get last digit n%10
    sum += last_digit;      // add to sum
    num /= 10;              // update the number
  }
  cout << sum;

  return 0;
}