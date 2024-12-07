// CodeForces 2050 D
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

int a[200007];

int solve() {
  str s;
  cin >> s;

  for( int i =0; i < s.length() + 5; i++ ) {
    a[i] = 0;
  }

  for ( int i = 0; i < s.length(); i++ ) {
    a[i] = s[i] - '0';
  }
  
  int cur = s.length() - 1;
  int tempa, tempb;

  while ( cur > 0 ) {
    if ( a[cur] == 0 ) {
      cur -= 1;
      continue;
    }

    if ( a[cur] > a[cur - 1] + 1 ) {
      tempa = a[cur] - 1;
      tempb = a[cur - 1];
      a[cur] = tempb;
      a[cur - 1] = tempa;
      cur += 1;
    } else {
      cur -= 1;
    }
  }

  for ( int i = 0; i < s.length(); i++ ) {
    cout << a[i];
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