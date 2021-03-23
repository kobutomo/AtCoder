#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
  int n, a, cnt[500] = {0};
  ll ans = 0;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> a;
    cnt[a + 200]++;
  }

  for (int i = -200; i <= 200; ++i) {
    for (int j = 200; j > i; --j) {
      ans = ((ll) cnt[i + 200] * cnt[j + 200] * (j - i) * (j - i));
    }
  }

  cout << ans << endl;
}
