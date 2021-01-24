#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  int N, t1 = 0, t2;
  scanf("%d", &N);
  int x[100000], y[100000];
  x[0] = 0;
  y[0] = 0;
  for (int i = 1; i <= N; ++i) {
    scanf("%d", &t2);
    scanf("%d %d", &x[t2], &y[t2]);
    int dis = abs(x[t2] - x[t1]) + abs(y[t2] - y[t1]);
    int timeDiff = t2 - t1;
    if (timeDiff - dis >= 0 && (timeDiff - dis) % 2 == 0) {
      t1 = t2;
      continue;
    }
    printf("No\n");
    return 0;
  }
  printf("Yes\n");
}
