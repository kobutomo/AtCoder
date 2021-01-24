#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  int A, B, C, X, ans = 0;
  cin >> A >> B >> C >> X;

  for (int a = 0; a <= A; ++a) {
    for (int b = 0; b <= B; ++b) {
      for (int c = 0; c <= C; ++c) {
        if (500 * a + 100 * b + 50 * c == X)
          ans++;
      }
    }
  }

  printf("%d\n", ans);
}
