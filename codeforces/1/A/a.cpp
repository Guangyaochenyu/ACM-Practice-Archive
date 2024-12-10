// CodeForces 1 A
// Guangyaochenyu

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef string str;

int solve() {
  int n, m, a;
  cin >> n >> m >> a;
  int n1 = n / a;
  int m1 = m / a;
  if (n % a) n1 += 1;
  if (m % a) m1 += 1;
  cout << n1 * m1 << endl;
  return 0;
}

int main() {
  ios::sync_with_stdio(false);
  int T = 1;
  // cin >> T;
  while (T--) solve();
  return 0;
}