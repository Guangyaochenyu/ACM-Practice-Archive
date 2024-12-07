// CodeForces 2050 E
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

int dp[1007][1007];

int solve() {
  str a, b, c;
  cin >> a >> b >> c;
  int lena = a.length(), lenb = b.length(), lenc = c.length();

  for ( int i = 0; i < lena + 5; i++ ) {
    for ( int j = 0; j < lenb + 5; j++ ) {
      dp[i][j] = 0;
    }
  }

  // Dynamic Programming
  // 0. dp[i][j]: 
  //      the first i+j chars of string c is from 
  //      the first i chars of string a and 
  //      the first j chars of string b and 
  //      allow dp[i][j] chars of faulure,
  //      minimize the number of faulure chars
  // 1. each time, we have three choices:
  //      add char from string a: 
  //            dp[i][j] = dp[i-1][j] + (a[i-1] == c[i+j-1] ? 0 : 1)
  //      add char from string b:
  //            dp[i][j] = dp[i][j-1] + (b[j-1] == c[i+j-1] ? 0 : 1)
  // 2. special treatment for dp[i][0] and dp[0][j]

  // dp[i][0]
  for ( int i = 1; i <= lena; i++ ) {
    dp[i][0] = dp[i-1][0] + (a[i-1] == c[i-1] ? 0 : 1);
  }

  // dp[0][j]
  for ( int j = 1; j <= lenb; j++ ) {
    dp[0][j] = dp[0][j-1] + (b[j-1] == c[j-1] ? 0 : 1);
  }

  // main dp
  for ( int i = 1; i <= lena; i++ ) {
    for ( int j = 1; j <= lenb; j++ ) {
      int froma = dp[i-1][j] + (a[i-1] == c[i+j-1] ? 0 : 1);
      int fromb = dp[i][j-1] + (b[j-1] == c[i+j-1] ? 0 : 1);
      dp[i][j] = min(froma, fromb);
    }
  }

  // output result
  cout << dp[lena][lenb] << endl;

  return 0;
}

int main() {
  ios::sync_with_stdio(false);
  int T = 1;
  cin >> T;
  while (T--) solve();
  return 0;
}