#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
  int n, tmp;
  cin >> n;
  int c[n + 1] = {0};
  for (int i = 0; i < n; i++) {
    cin >> tmp;
    if (c[tmp] != 0) {
      cout << "No" << endl;
      return 0;
    } else {
      c[tmp]++;
    }
  }

  cout << "Yes" << endl;
}
