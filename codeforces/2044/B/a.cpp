// CodeForces 2044 B
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
  str s;
  cin >> s;
  int n = s.size();
  for ( int i = n-1; i >= 0; i-- ) {
    if ( s[i] == 'p' ) cout << 'q';
    if ( s[i] == 'q' ) cout << 'p';
    if ( s[i] == 'w' ) cout << 'w';
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