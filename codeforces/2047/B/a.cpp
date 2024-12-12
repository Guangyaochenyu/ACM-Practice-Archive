// CodeForces 2047 B
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
//------------------------------------------------------------------------------


int solve() {
  int n;  cin >> n;
  map<char, int> m;
  str s;
  cin >> s;
  for ( auto x: s ) {
    m[x] += 1;
  }
  int mini = n, maxi = 0;
  char minc, maxc;
  for ( auto x: m ) {
    if ( x.se > maxi ) {
      maxi = x.se;
      maxc = x.fi;
    }
    if ( x.se <= mini ) {
      mini = x.se;
      minc = x.fi;
    }
  }
  bool status = false;
  for ( int i = 0; i < n; i++ ) {
    if ( s[i] != minc ) {
      cout << s[i];
    } else if ( s[i] == minc && status != true ) {
      cout << maxc;
      status = true;
    } else {
      cout << s[i];
    }
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