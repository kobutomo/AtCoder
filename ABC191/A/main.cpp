#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  int v, t, s, d;
  cin >> v >> t >> s >> d;
  if (d >= v * t && d <= v * s)
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
}
