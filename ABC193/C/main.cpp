#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
  ll n;
  set<ll> set;
  cin >> n;
  for (ll a = 2; a * a <= n; a++) {
    ll x = a * a;
    while (x <= n) {
      set.insert(x);
      x *= a;
    }
  }
  cout << n - set.size();
}
