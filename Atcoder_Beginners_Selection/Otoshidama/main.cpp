#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  int N, Y;
  cin >> N >> Y;

  for (int i = 0; i <= N; ++i) {
    int y1 = Y;
    y1 -= 10000 * i;
    if (y1 < 0) break;
    if (y1 > (N - i) * 5000) continue;
    for (int j = 0; j <= N - i; ++j) {
      int y2 = y1;
      y2 -= 5000 * j;
      if (y2 < 0) break;
      if (y2 == (N - i - j) * 1000) {
        printf("%d %d %d\n", i, j, N - i - j);
        return 0;
      }
    }
  }
  printf("-1 -1 -1\n");
}
