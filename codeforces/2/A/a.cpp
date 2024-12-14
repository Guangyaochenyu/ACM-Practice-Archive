// CodeForces 2 A
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

  int n;
  str name;
  ll score;  

  map< str, ll > si;
  vector< pair< str, int > > history;
  
  vector< str > max_scores = {};

  cin >> n;
  for( int i = 0; i < n; i++ ) {
    cin >> name >> score;
    if ( si.find(name) == si.end() ) si[name] = 0;
    si[name] += score;
    history.pb(mp(name, si[name]));
  }

  ll max_score = 0;
  for ( auto x: si ) max_score = max(max_score, x.se);

  for ( auto x: history ) {
    if ( x.se >= max_score && si[x.fi] >= max_score ) {
      cout << x.fi << endl;
      break;
    }
  }

  return 0;
}

int main() {
  ios::sync_with_stdio(false);
  int T = 1;
  // cin >> T;
  while (T--) solve();
  return 0;
}