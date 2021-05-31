#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
  int n, k, ans = 0;
  cin >> n >> k;
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= k; ++j) {
      string room = to_string(i) + '0' + to_string(j);
      ans += stoi(room);
    }
  }
  cout << ans << endl;
}
