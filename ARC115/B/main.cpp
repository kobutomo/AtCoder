#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
  int N, c, min = 1 << 30, A[500], B[500], sub[500];
  cin >> N;
  for (int i = 0; i < N; ++i) {
    int prev = -1;
    bool isMin = false;
    for (int j = 0; j < N; ++j) {
      cin >> c;
      if (j == 0) {
        A[i] = c;
        if (c < min) {
          min = c;
          isMin = true;
        }
      } else {
        if (i == 0) {
          sub[j] = c - prev;
        } else {
          if (c != prev + sub[j]) {
            cout << "No" << endl;
            return 0;
          }
        }
      }
      prev = c;
      if (isMin) B[j] = c;
    }
  }
  cout << "Yes" << endl;
  for (int i = 0; i < N; ++i) {
    if (i != 0) cout << " ";
    cout << A[i] - min;
  }
  cout << endl;
  for (int i = 0; i < N; ++i) {
    if (i != 0) cout << " ";
    cout << B[i];
  }
  cout << endl;
}
