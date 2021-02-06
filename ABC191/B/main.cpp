#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  int x, n, curr;
  vector<int> a;
  cin >> n >> x;
  for (int i = 0; i < n; ++i) {
    cin >> curr;
    if (curr != x)
      a.push_back(curr);
  }
  for (int i = 0; i < a.size(); ++i) {
    if (i != 0)
      cout << " ";
    cout << a.at(i);
  }
  cout << endl;
}
