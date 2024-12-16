// CodeForces 3 A
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
  int x1, y1, x2, y2, x, y, n, i, ans; char inr;
  scanf("%c%d", &inr, &y1); x1 = inr - 'a'; getchar();
  scanf("%c%d", &inr, &y2); x2 = inr - 'a'; getchar();
  x = x2 - x1; y = y2 - y1;
  if( x < 0 ) x = -x; if( y < 0 ) y = -y;
  n = x > y ? x : y; printf("%d\n",n);
  x = x2 - x1; y = y2 - y1;
  for( i = 0; i < n; i++ ) {
    if( x > 0 ) { printf("R"); x--; }
    if( x < 0 ) { printf("L"); x++; }
    if( y > 0 ) { printf("U"); y--; }
    if( y < 0 ) { printf("D"); y++; }
    printf("\n");
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