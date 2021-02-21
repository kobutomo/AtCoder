#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
  ll m;
  string x;
  cin >> x >> m;

  if (x.size() == 1) {
    cout << (x[0] - '0' <= m ? 1 : 0) << endl;
    return 0;
  }

  auto check = [&](ll base) {
    ll tmp = 0;
    for (auto c:x) {
      if (tmp > (m - c + '0') / base) return false;
      tmp = tmp * base + c - '0';
    }
    return tmp <= m;
  };

  int big = 0;
  for (auto c:x) big = max(c - '0', big);
  ll l = big, r = m;

  while (l < r) {
    ll mid = (r + l + 1) >> 1;
    if (check(mid)) l = mid;
    else r = mid - 1;
  }

  cout << l - big << endl;
}
