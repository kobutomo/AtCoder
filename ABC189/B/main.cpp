#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  int ans = 0, sum = 0, p, N, X, v;
  bool done = false;
  cin >> N >> X;
  for (int i = 1; i <= N; ++i) {
    ans = i;
    cin >> v >> p;
    sum += v * p;
    if (sum > X * 100) {
      done = true;
      break;
    }
  }

  if (done)
    cout << ans << endl;
  else
    cout << -1 << endl;

  return 0;
}
