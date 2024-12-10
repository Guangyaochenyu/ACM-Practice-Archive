// CodeForces 1 B
// Guangyaochenyu

#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef long long ll;
typedef unsigned long long ull;

int solve() {
  int a, b;
  char inr[100], *p, cat[] = "a0", ans[100] = {0};
  scanf("%s", inr);
  strcat(inr, cat);
  p = inr;
  for ( ; !isdigit(*p); p++ ) ;
  sscanf( p, "%d", &a );
  for ( ; isdigit(*p); p++ ) ;
  for ( ; !isdigit(*p); p++ ) ;
  sscanf(p, "%d", &b);
  if ( b == 0 ) {
    for ( p = inr; !isdigit(*p); p++ ) {
      b *= 26;
      b += *p - 'A' + 1;
    }
    printf("R%dC%d\n", a, b);
    return 0;
  }
  for ( p = ans; b > 0; p++ ) {
    *p = b % 26 + 'A' - 1;
    if ( b % 26 == 0 ) {
      *p = 'Z';
      b -= 26;
    }
    b /= 26;
  }
  for ( b = strlen(ans) - 1; b >= 0; b-- )
    printf("%c", ans[b]);
  printf("%d\n", a);
  return 0;
}

int main() {
  int T;
  scanf("%d", &T);
  while (T--) solve();
  return 0;
}
