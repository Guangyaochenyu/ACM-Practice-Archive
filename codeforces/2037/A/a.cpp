// CodeForces 2037 A
// Guangyaochenyu

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef string str;

int a[30];

int solve() {
  int n;
  int input;
  cin >> n;
  for ( int i=0; i<30; i++ ) {
    a[i] = 0;
  }
  for( int i=0; i<n; i++ ) {
    cin >> input;
    a[input] += 1;
  }
  int ans = 0;
  for ( int i=0; i<30; i++ ) {
    ans += a[i] / 2;
  }
  cout << ans << endl;
  return 0;
}

int main() {
  ios::sync_with_stdio(false);
  int T = 1;
  cin >> T;
  while (T--) solve();
  return 0;
}