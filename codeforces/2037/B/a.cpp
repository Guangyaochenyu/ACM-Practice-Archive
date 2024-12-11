// CodeForces 2037 B
// Guangyaochenyu

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef string str;

int solve() {
  int n;
  cin >> n;
  vector < int > v (n);
  for ( int i=0; i<n; i++ ) {
    cin >> v[i];
  }
  // sort
  sort(v.begin(), v.end());

  // two pointer
  int l = 0, r = n - 1, now;

  while ( l < r ) {
    now = v[l] * v[r];
    if ( now > n-2 ) {
      r -= 1;
    } else if ( now < n-2 ) {
      l += 1;
    } else {
      cout << v[l] << " " << v[r] << endl;
      break;
    }
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