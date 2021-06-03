#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

bool comp(pair<ll, ll> a, pair<ll, ll> b) {
  return 2 * a.first + a.second > 2 * b.first + b.second;
}

int main() {
  int N;
  ll a, b, sumA = 0, sumB = 0;
  vector<pair<ll, ll>> C;

  cin >> N;
  for (int i = 0; i < N; ++i) {
    cin >> a >> b;
    sumA += a;
    C.emplace_back(a, b);
  }
  sort(C.begin(), C.end(), comp);

  int ans = 0;
  for (auto[a, b]: C) {
    if (sumB > sumA) break;
    sumB += a + b;
    sumA -= a;
    ans++;
  }

  cout << ans << endl;
}
