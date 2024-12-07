// CodeForces 2050 C
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
  str s;
  cin >> s;
  map<int, int> mp;
  for ( int i = 0; i < 10; i++ ) {
    mp[i] = 0;
  }
  
  int sum = 0;
  for (int i = 0; i < s.size(); i++ ) {
    int num = s[i] - '0';
    sum += num;
    mp[num] += 1;
  }

  stack<pair<int, pair<int, int>>> st;
  st.push(
    make_pair(
      sum%9, 
      make_pair(
        min(mp[2] % 9 + 9, mp[2]),
        min(mp[3] % 9 + 9, mp[3])
      )
    )
  );

  bool status = false;
  if ( sum % 9 == 0 ) {
    status = true;
  }

  while ( !st.empty() && !status ) {
    pair<int, pair<int, int>> top = st.top();
    st.pop();
    int c1 = top.first;
    int c2 = top.second.first;
    int c3 = top.second.second;

    if ( c2 != 0 ) {
      int next = (c1 + 2) % 9;
      if ( next == 0 ) {
        status = true;
        break;
      }
      st.push(make_pair(next, make_pair(c2-1, c3)));
    }

    if ( c3 != 0 ) {
      int next = (c1 + 6) % 9;
      if ( next == 0 ) {
        status = true;
        break;
      }
      st.push(make_pair(next, make_pair(c2, c3-1)));
    }
  }

  while ( !st.empty() ) {
    st.pop();
  }

  cout << ( status ? "YES" : "NO" ) << endl;
  return 0;
}

int main() {
  ios::sync_with_stdio(false);
  int T = 1;
  cin >> T;
  while (T--) solve();
  return 0;
}