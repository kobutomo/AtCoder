#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int rec(int l, int r, vector<int> &h) {
  if (l >= r) return 0;
  auto it = min_element(h.begin() + l, h.begin() + r);
  int idx = it - h.begin();
  int v = *it;
  for (int i = l; i < r; ++i) h.at(i) -= v;
  return rec(l, idx, h) + rec(idx + 1, r, h) + v;
}

int main() {
  int n, c;
  cin >> n;
  vector<int> h(n);
  for (int &p : h)
    cin >> p;
  cout << rec(0, n, h) << endl;
  return 0;
}
