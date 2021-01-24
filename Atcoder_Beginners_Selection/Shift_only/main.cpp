#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  int N, A[200], ans = 0;
  scanf("%d", &N);
  for (int i = 0; i < N; ++i) {
    scanf("%d", &A[i]);
    if (A[i] % 2 != 0) {
      printf("0\n");
      return 0;
    } else {
      A[i] /= 2;
    }
  }
  ans++;
  while (true) {
    for (int i = 0; i < N; ++i) {
      if (A[i] != 0 && A[i] % 2 != 0) {
        printf("%d\n", ans);
        return 0;
      } else {
        A[i] /= 2;
      }
    }
    ans++;
  }
}
