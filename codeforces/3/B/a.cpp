// CodeForces 3 B
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
  int n, v, t, p;
  priority_queue<pll> k1;
  priority_queue<pll, vector<pll>, greater<pll>> k2;
  vector<pll> k1u;
  ll result_count = 0, result_sum = 0;
  cin >> n >> v;
  for ( int i = 1; i <= n; i++ ) {
    cin >> t >> p;
    if ( t == 1 ) {
      k1.push(mp(p, i));
    } else {
      k2.push(mp(p, i));
      result_count += 2;
      result_sum += p;
    }
  }
  
  while ( result_count > v ) {
    result_count -= 2;
    result_sum -= k2.top().fi;
    k2.pop();
  }

  while ( v > result_count && !k1.empty() ) {
    result_count += 1;
    result_sum += k1.top().fi;
    k1u.pb(k1.top());
    k1.pop();
  }

  bool status = true;
  while ( status ) {
    status = false;
    if ( k1.size() >= 2 ) {
      pll a = k1.top(); k1.pop();
      pll b = k1.top(); k1.pop();
      if ( a.fi + b.fi > k2.top().fi ) {
        result_count -= 2;
        result_sum -= k2.top().fi;
        k2.pop();
        result_count += 2;
        result_sum += a.fi + b.fi;
        k1u.pb(a);
        k1u.pb(b);
        status = true;
      } else {
        k1.push(a);
        k1.push(b);
      }
    } else if ( k1.size() == 1 ) {
      if ( k1.top().fi > k2.top().fi ) {
        result_count -= 2;
        result_sum -= k2.top().fi;
        k2.pop();
        result_count += 1;
        result_sum += k1.top().fi;
        k1u.pb(k1.top());
        k1.pop();
        status = true;
      }
    }
  }

  cout << result_sum << endl;
  while ( !k1u.empty() ) {
    cout << k1u.back().se << ' ';
    k1u.pop_back();
  }
  while ( !k2.empty() ) {
    cout << k2.top().se << ' ';
    k2.pop();
  }

  cout << endl;
  
  return 0;
}

int main() {
  ios::sync_with_stdio(false);
  int T = 1;
  // cin >> T;
  while (T--) solve();
  return 0;
}