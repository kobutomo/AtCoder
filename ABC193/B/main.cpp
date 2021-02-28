#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
  int n, a, p, x, ans = -1;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> a >> p >> x;
    if (a < x) {
      if (ans == -1 || p < ans) ans = p;
    }
  }

  cout << ans << endl;
}
