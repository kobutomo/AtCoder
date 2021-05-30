#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
  int A, B, W;
  cin >> A >> B >> W;
  W = W * 1000;
  int minAns = 1000001, maxAns = 0;
  for (int i = 1; i <= 1000000; ++i) {
    if (A * i <= W && W <= B * i) {
      minAns = min(minAns, i);
      maxAns = max(maxAns, i);
    }
  }
  if (maxAns) cout << minAns << " " << maxAns << endl;
  else cout << "UNSATISFIABLE" << endl;
}
