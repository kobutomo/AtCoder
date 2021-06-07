#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void rec(vector<vector<int>> &G, bool ans[], vector<int> &cur) {
  for (auto &p:cur) {
    if (!ans[p]) {
      ans[p] = true;
      rec(G, ans, G.at(p));
    }
  }
}

int main() {
  int n, m, a, b;
  cin >> n >> m;
  vector<vector<int>> G(n + 1);

  for (int i = 0; i < m; ++i) {
    cin >> a >> b;
    G.at(a).emplace_back(b);
  }

  ll ans = 0;

  for (int i = 1; i <= n; ++i) {
    bool an[2100];
    an[i] = true;
    auto cur = G.at(i);
    rec(G, an, cur);
    for (bool j : an) if (j)ans++;
  }

  cout << ans << endl;
}
