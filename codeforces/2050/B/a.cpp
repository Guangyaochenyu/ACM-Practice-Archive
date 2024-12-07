// CodeForces 2050 B
// Guangyaochenyu

#include <iostream>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int solve() {
  int n, input;
  // max n * ai = 1e5 * 1e9 = 1e14
  // max int = 2^31 - 1 = 2147483647 = 2e9, is not enough
  // max long long = 2^63 - 1 = 9223372036854775807 = 9e18, is enough
  ll odd_count, odd_sum = 0;
  ll even_count, even_sum = 0;
  cin >> n;
  odd_count = n / 2;
  even_count = n - odd_count;
  for (int i = 0; i < n; i++) {
    cin >> input;
    if (i % 2 == 1) {
      odd_sum += input;
    } else {
      even_sum += input;
    }
  }
  bool odd_divisible = odd_sum % odd_count == 0;
  bool even_divisible = even_sum % even_count == 0;
  
  if (odd_divisible && even_divisible && odd_sum / odd_count == even_sum / even_count) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  
  return 0;
}

int main() {
  ios::sync_with_stdio(false);
  int T = 1;
  cin >> T;
  while (T--) solve();
  return 0;
}