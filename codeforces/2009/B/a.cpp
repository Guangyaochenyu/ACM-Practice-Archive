// CodeForces 2009 B
// Guangyaochenyu

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef string str;

int solve() {
  int n;
  string s;
  cin >> n;
  stack < int > st;
  for ( int i=0; i<n; i++ ) {
    cin >> s;
    st.push(s.find_first_of('#') + 1);
  }

  while(!st.empty()) {
    cout << st.top() << " ";
    st.pop();
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