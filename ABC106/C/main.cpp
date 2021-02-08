#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  int k, ans = 1;
  string s;
  cin >> s >> k;
  for (int i = 0; i < s.size(); ++i) {
    if (s.at(i) != '1') {
      ans = s.at(i) - '0';
      break;
    }
    if (i + 1 == k) break;
  }
  cout << ans << endl;
}
