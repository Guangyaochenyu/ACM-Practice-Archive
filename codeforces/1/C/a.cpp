// CodeForces 1 C
// Guangyaochenyu

#include <bits/stdc++.h>
using namespace std;

#define pi acos(-1.0)
#define eps 1e-4

typedef long long ll;
typedef unsigned long long ull;
typedef string str;

struct node {
  double x, y;
} a[10];

double dis[5];
double angle[5];

double mod(double a, double b) {
  return a - (int)(a / b) * b;
}

double gcd(double a, double b) {
  if ( b < eps ) return a;
  return gcd(b, mod(a, b));
}

int solve() {
  for (int i = 0; i < 3; i++) {
    cin >> a[i].x >> a[i].y;
  }
  double p = 0, r;
  for (int i = 0; i < 3; i++) {
    dis[i] = sqrt((a[i].x - a[(i + 1) % 3].x) * (a[i].x - a[(i + 1) % 3].x) + (a[i].y - a[(i + 1) % 3].y) * (a[i].y - a[(i + 1) % 3].y));
    p += dis[i];
  }
  p /= 2;
  r = (dis[0] * dis[1] * dis[2]) / (4 * sqrt(p * (p - dis[0]) * (p - dis[1]) * (p - dis[2])));
  for (int i = 0; i < 2; i++) {
    angle[i] = 2 * asin(0.5 * dis[i] / r);
  }
  angle[2] = 2 * pi - angle[0] - angle[1];
  double ang = gcd(angle[0], gcd(angle[1], angle[2])) / pi * 180;
  double bian = sqrt(2 * r * r - 2 * r * r * cos(ang / 180 * pi));
  double P = (r * 2 + bian) / 2;
  double ans = sqrt(P * (P - r) * (P - r) * (P - bian)) * (360 / ang);
  cout << fixed << setprecision(6) << ans << endl;
 
  return 0;
}

int main() {
  ios::sync_with_stdio(false);
  int T = 1;
  // cin >> T;
  while (T--)
    solve();
  return 0;
}