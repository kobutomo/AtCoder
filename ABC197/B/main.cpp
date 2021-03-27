#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
  int H, W, X, Y, cnt = 0;
  string S[120];
  cin >> H >> W >> X >> Y;
  X--;
  Y--;
  for (int i = 0; i < H; ++i) {
    cin >> S[i];
  }
  if (S[X][Y] == '#') {
    cout << 0 << endl;
    return 0;
  }
  cnt++;
  for (int i = X - 1; i >= 0; --i) {
    if (S[i][Y] == '.') cnt++;
    else break;
  }
  for (int i = X + 1; i < H; ++i) {
    if (S[i][Y] == '.') cnt++;
    else break;
  }
  for (int i = Y - 1; i >= 0; --i) {
    if (S[X][i] == '.') cnt++;
    else break;
  }
  for (int i = Y + 1; i < W; ++i) {
    if (S[X][i] == '.') cnt++;
    else break;
  }
  cout << cnt << endl;
}
