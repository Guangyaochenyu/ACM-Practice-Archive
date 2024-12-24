// CodeForces 2044 E
// Guangyaochenyu

//------------------------------------------------------------------------------
// #include <bits/stdc++.h>
#include <iostream>
#include <queue>
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
  ll k, l1, r1, l2, r2;
  cin >> k >> l1 >> r1 >> l2 >> r2;
  ll power=1,ans=0;
  while( l1 * power <= r2 ) {
    ll yo = ( l2 + power - 1 ) / power;
    ll yo2 = r2 / power;
    ll left = max( yo, l1 );
    ll right = min( yo2, r1 );
    ans += max( 0LL, right - left + 1 );
    power *= k;
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