#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int f(string x) {
  string big = x;
  string small = x;
  sort(big.begin(), big.end(), greater());
  sort(small.begin(), small.end());

  return stoi(big) - stoi(small);
}

int main() {
  string n;
  int k, ans[120000];
  cin >> n >> k;
  ans[0] = stoi(n);
  for (int i = 1; i < k + 1; ++i) {
    ans[i] = f(to_string(ans[i - 1]));
  }

  cout << ans[k] << endl;
}
