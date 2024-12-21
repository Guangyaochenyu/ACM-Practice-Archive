// CodeForces 2044 D
// Guangyaochenyu

//------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
//------------------------------------------------------------------------------
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef string str;
//------------------------------------------------------------------------------
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define endl '\n'
#define input(v) { for ( auto& x: v ) { cin >> x; } }
#define output(v) { for ( auto x: v ) { cout << x << ' '; } cout << endl; }
//------------------------------------------------------------------------------
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef priority_queue<int> pqi;
//------------------------------------------------------------------------------

int solve() {
  int n;
  cin >> n;
  int a[n+7];
  bool b[n+7];
  for ( int i = 1; i <= n; i++ ) { cin >> a[i]; b[i] = false; }
  
  for ( int i = 1; i <= n; i++ ) {
    if ( b[a[i]] == false ) { cout << a[i] << ' '; b[a[i]] = true; }
  }
  for ( int i = 1; i <= n; i++ ) {
    if ( b[i] == false ) { cout << i << ' '; b[i] = true; }
  }
  cout << endl;
  return 0;
}

int main() {
  ios::sync_with_stdio(false);
  int T = 1;
  cin >> T;
  while (T--) solve();
  return 0;
}