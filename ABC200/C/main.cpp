#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
  int N;
  vector<ll> R(200);
  ll ans = 0;
  cin >> N;
  for (int i = 0; i < N; ++i) {
    int A;
    cin >> A;
    int r = A % 200;
    R.at(r)++;
  }
  for (int i = 0; i < R.size(); ++i) {
    ans += R.at(i) * (R.at(i) - 1) / 2;
  }
  cout << ans << endl;
}
