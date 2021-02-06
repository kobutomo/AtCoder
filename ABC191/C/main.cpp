#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  int H, W, k1, k2, l, prevL, r, prevR, ans = 0;
  string s;
  for (int i = 0; i < H; ++i) {
    for (int j = 0; j < W; ++j) {
      cin >> s;
      for (int k = 0; k < s.size(); ++k) {
        char curr = s.at(k);
        if (curr == '#') {
          if (l == 0)
            l = k;
          r = k;
          if (l) {
            if (prevL != l)
              ans++;
            prevL = l;
            l = 0;
          }
          if (r) {
            if (prevR - r != k2)
              ans++;
            k1 = prevL - l;
          }
        }
      }
    }
  }
}
