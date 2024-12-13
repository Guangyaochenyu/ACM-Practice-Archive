// CodeForces 2033 B
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
  int n, input;  cin >> n;
  map < int, int > mp;
  for ( int i = 0; i < n; i ++ ) {
    for ( int j = 0; j < n; j ++ ) {
      cin >> input;
      mp[ i-j+n-1 ] = max( mp[ i-j+n-1 ], -input);
    }
  }
  int result = 0;
  for( auto& x: mp ) {
    result += x.se;
  }
  cout << result << endl;
  return 0;
}

int main() {
  ios::sync_with_stdio(false);
  int T = 1;
  cin >> T;
  while (T--) solve();
  return 0;
}