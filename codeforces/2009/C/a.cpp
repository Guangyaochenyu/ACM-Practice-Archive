// CodeForces 2009 C
// Guangyaochenyu

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef string str;

int solve() {
  int x, y, k, rx, ry;
  cin >> x >> y >> k;
  rx = x / k, ry = y / k;
  if ( x % k != 0  ) {
    rx += 1;
  }
  if ( y % k != 0 ) {
    ry += 1;
  }

  if ( rx > ry ) {
    cout << 2 * rx - 1 << endl;
  } else {
    cout << 2 * ry << endl;
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