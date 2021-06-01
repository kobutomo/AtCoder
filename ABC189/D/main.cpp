#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
  ll n, ans = 1;
  cin >> n;
  vector<string> S(n);
  for (int i = 0; i < n; ++i) {
    cin >> S.at(i);
  }
  for (int i = 0; i < S.size(); ++i) {
    string s = S[i];
    if (s == "OR") {
      ans += powl(2, i + 1);
    }
  }
  cout << ans << endl;
}
