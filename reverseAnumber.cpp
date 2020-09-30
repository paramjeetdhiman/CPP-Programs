#include <bits/stdc++.h>
using namespace std;

int main() {
  int num{}, last{}, rev{};
  cin >> num;

  while (num != 0) {
    last = num % 10;
    rev = rev * 10 + last;
    num /= 10;
  }
  cout << rev;

  return 0;
}