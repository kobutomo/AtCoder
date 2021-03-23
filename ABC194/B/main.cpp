#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
  int n, a, b;
  pair<int, int>
      minA = {1000000, 1000000}, minB = {1000000, 1000000},
      minA2 = {1000000, 1000000}, minB2 = {1000000, 1000000};
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> a >> b;
    if (a < minA.first) {
      if (minA.first != 1000000) {
        minA2.first = minA.first;
        minA2.second = minA.second;
      }
      minA.first = a;
      minA.second = i;
    } else if (a < minA2.first) {
      minA2.first = a;
      minA2.second = i;
    }
    if (b < minB.first) {
      if (minA.first != 1000000) {
        minB2.first = minB.first;
        minB2.second = minB.second;
      }
      minB.first = b;
      minB.second = i;
    } else if (b < minB2.first) {
      minB2.first = b;
      minB2.second = i;
    }
  }

  if (minA.second != minB.second)
    cout << max(minA.first, minB.first) << endl;
  else {
    cout << min(minA.first + minB.first,
                min(max(minA.first, minB2.first), max(minB.first, minA2.first))) << endl;
  }
}
