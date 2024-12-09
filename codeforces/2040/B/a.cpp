// CodeForces 2040 B
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
  int n;
  cin >> n;
  
  int now = 1, count = 1;
  while( now < n ) {
    now = (now + 1) << 1;
    count += 1;
  }
  cout << count << endl;

  return 0;
}

int main() {
  ios::sync_with_stdio(false);
  int T = 1;
  cin >> T;
  while (T--) solve();
  return 0;
}