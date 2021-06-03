#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
  ll n, a, b, c, C;
  cin >> n >> C;
  vector<pair<ll, ll>> e;
  for (int i = 0; i < n; ++i) {
    cin >> a >> b >> c;
    e.emplace_back(a - 1, c);
    e.emplace_back(b, -c);
  }
  sort(e.begin(), e.end());
  int last = 0;
  ll fee = 0, ans = 0;
  for (auto&[day, money] : e) {
    ans += min(fee, C) * (day - last);
    fee += money;
    last = day;
  }

  cout << ans << endl;
}
