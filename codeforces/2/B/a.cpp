// CodeForces 2 B
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

int n;
int a[1007][1007], dp[1007][1007];
char pre[1007][1007];

int dcount(int x, int d) {
  if ( x == 0 ) return 2000;
  int cnt = 0;
  while ( x % d == 0 ) {
    x /= d;
    cnt += 1;
  }
  return cnt;
}

pair<int, string> ssolve(int d) {
  for( int i = 0; i <= n; i++ ) {
    dp[0][i] = dp[i][0] = 1e9;
  }
  dp[1][1] = dcount(a[1][1], d);
  pre[1][1] = 'E';
  for ( int i = 1; i <= n; i++ ) {
    for ( int j = 1; j <= n; j++ ) {
      if ( i == 1 & j == 1 ) continue;
      if ( dp[i-1][j] < dp[i][j-1] ) {
        pre[i][j] = 'D';
        dp[i][j] = dp[i-1][j];
      } else {
        pre[i][j] = 'R';
        dp[i][j] = dp[i][j-1];
      }
      dp[i][j] += dcount(a[i][j], d);
    }
  }
  string path = "";
  int i = n, j = n;
  while ( i > 0 && j > 0 ) {
    path += pre[i][j];
    if ( pre[i][j] == 'D' ) i -= 1;
    else j -= 1;
  }
  path.pop_back();
  reverse(all(path));
  return mp(dp[n][n], path);
}

int solve() {

  cin >> n;
  for ( int i = 1; i <= n; i++ ) {
    for ( int j = 1; j <= n; j++ ) {
      cin >> a[i][j];
    }
  }

  auto [ans, path] = min(ssolve(2), ssolve(5));
  pair<int, int> zero{-1, -1};
  for ( int i = 1; i <= n; i++ ) {
    for ( int j = 1; j <= n; j++ ) {
      if ( a[i][j] == 0 ) {
        zero = mp(i, j);
      }
    }
  }
  if ( zero.fi >= 0 && ans > 1 ) {
    auto [x, y] = zero;
    cout << "1\n" << string(x-1, 'D') << string(y-1, 'R') << string(n-x, 'D') << string(n-y, 'R') << endl;
  } else {
    cout << ans << endl << path << endl;
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