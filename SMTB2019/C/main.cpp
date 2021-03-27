#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
  int X;
  cin >> X;
  int c = X / 100;
  int rem = X - 100 * c;
  if (rem <= c * 5) cout << 1 << endl;
  else cout << 0 << endl;
}
