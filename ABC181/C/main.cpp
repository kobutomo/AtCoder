#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> p(n);

  for (auto &P:p) cin >> P.first >> P.second;

  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      for (int k = j + 1; k < n; ++k) {
        int dx1 = p.at(j).first - p.at(i).first;
        int dx2 = p.at(k).first - p.at(i).first;
        int dy1 = p.at(j).second - p.at(i).second;
        int dy2 = p.at(k).second - p.at(i).second;
        if (dy1 * dx2 == dy2 * dx1) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
}
