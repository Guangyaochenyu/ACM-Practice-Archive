// CodeForces 2 C
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

double x[3], y[3], r[3], t[3];

double dist(double dx, double dy) {
  for ( int i = 0; i < 3; i++ ) {
    t[i] = sqrt((x[i] - dx) * (x[i] - dx) + (y[i] - dy) * (y[i] - dy)) / r[i];
  }
  double o = 0;
  for ( int i = 0; i < 3; i++ ) {
    o += (t[i] - t[(i + 1) % 3]) * (t[i] - t[(i + 1) % 3]);
  }
  return o;
}

int solve() {

  for( int i = 0; i<3; i++ ) {
    cin >> x[i] >> y[i] >> r[i];
  }
  double dx = (x[0] + x[1] + x[2]) / 3.0;
  double dy = (y[0] + y[1] + y[2]) / 3.0;
  double s;
  for( s = 1; s > 1e-6; ) {
    if ( dist(dx, dy) > dist(dx + s, dy) ) dx += s;
    else if ( dist(dx, dy) > dist(dx - s, dy) ) dx -= s;
    else if ( dist(dx, dy) > dist(dx, dy + s) ) dy += s;
    else if ( dist(dx, dy) > dist(dx, dy - s) ) dy -= s;
    else s *= 0.5;
  }

  if ( dist(dx, dy) < 1e-6 ) {
    cout << fixed << setprecision(6) << dx << ' ' << dy << endl;
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