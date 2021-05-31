#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

bool comp(pair<ll, ll> l, pair<ll, ll> r) {
  return l.first < r.first;
}

int main() {
  ll n, k;
  cin >> n >> k;
  ll last = 0;
  vector<pair<ll, ll>> f(n);
  for (auto &F:f) {
    cin >> F.first;
    cin >> F.second;
  }
  sort(f.begin(), f.end(), comp);

  for (auto &F:f) {
    if (k >= F.first - last) {
      k -= F.first - last;
      k += F.second;
      last = F.first;
    } else {
      break;
    }
  }
  last += k;

  cout << last << endl;
}
