// CodeForces 2040 A
// Guangyaochenyu

#include <iostream>
#include <map>
#include <stack>
#include <utility>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef string str;


int solve() {
  int n, k, a;
  cin >> n >> k;
  int rem[107], pos[107];
  for (int i = 0; i < 107; i++) {
    rem[i] = 0;
    pos[i] = 0;
  }
  for (int i = 0; i < n; i++) {
    cin >>  a;
    rem[ a % k ] += 1;
    pos[ a % k ] = i;
  }

  int ans = -1;
  for (int i = 0; i < k; i++) {
    if (rem[i] == 1) {
      ans = pos[i];
      break;
    }
  }

  if (ans == -1) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
    cout << ans + 1 << endl;
  }

  return 0;
}

int main() {
  ios::sync_with_stdio(false);
  int T = 1;
  cin >> T;
  while (T--) solve();
  return 0;
}