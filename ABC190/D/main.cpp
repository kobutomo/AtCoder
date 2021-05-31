#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  int MAX = 3000000, ans = 0;
  long long n;
  cin >> n;
  for (double i = 1; i < MAX; ++i) {
    long long a = 2 * n - i * i + i;
    double c = a / double(2 * i);
    if (c < 1) break;
    if (floor(c) == c) {
      ans++;
      ans++;
    }
  }

  cout << ans << endl;
}
