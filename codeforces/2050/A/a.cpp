// CodeForces 2050 A
// Guangyaochenyu

#include <iostream>
using namespace std;

int solve()
{
  int n, m, rem, res;
  bool status = true;
  cin >> n >> m;
  rem = m;
  res = 0;
  string input;
  for (int i = 0; i < n; i++) {
    cin >> input;
    int len = input.length();
    if (status) {
      if (rem >= len) {
        res += 1;
        rem -= len;
      } else {
        status = false;
      }
    }
  }
  cout << res << endl;
  return 0;
}

int main() {
  ios::sync_with_stdio(false);
  int T = 1;
  cin >> T;
  while (T--) solve();
  return 0;
}