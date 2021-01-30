#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  int n, s, d, x, y;
  scanf("%d %d %d", &n, &s, &d);
  for (int i = 0; i < n; ++i) {
    scanf("%d %d", &x, &y);
    if (x < s && y > d) {
      printf("Yes\n");
      return 0;
    }
  }
  printf("No\n");
}
