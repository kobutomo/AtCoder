#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  int ans = 0, n;
  cin >> n;

  for (int i = 1; i <= n; i += 2) {
    int cnt = 0;
    for (int j = 1; j <= i; ++j) {
      if (i % j == 0)cnt++;
    }
    if (cnt == 8) ans++;
  }

  cout << ans << endl;
}
