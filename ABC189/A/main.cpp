#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  string C;
  cin >> C;
  if (C[0] == C[1] && C[1] == C[2]) {
    cout << "Won" << endl;
  } else {
    cout << "Lost" << endl;
  }
  return 0;
}
