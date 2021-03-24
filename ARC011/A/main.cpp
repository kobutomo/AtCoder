#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
  int m, n, N, rem = 0, ans = 0;
  cin >> m >> n >> N;
  while (N + rem >= m) {
    ans += N;
    int nextRem = (N + rem) % m;
    N = n * ((N + rem) / m);
    rem = nextRem;
  }
  ans += N;
  cout << ans << endl;
}
