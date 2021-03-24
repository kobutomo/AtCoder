#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
  int H, W;
  char c;
  cin >> H >> W;
  int A[52][52] = {{0}};
  for (int i = 1; i <= H; ++i) {
    for (int j = 1; j <= W; ++j) {
      cin >> c;
      if (c != '.') A[i][j] = 1;
    }
  }
  for (int i = 1; i <= H; ++i) {
    for (int j = 1; j <= W; ++j) {
      auto curr = A[i][j], left = A[i - 1][j], right = A[i + 1][j], top = A[i][j - 1], bottom = A[i][j + 1];
      if (curr && !left && !right && !top && !bottom) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
}
