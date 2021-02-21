#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  string s;
  bool ans = true;
  cin >> s;
  for (int i = 0; i < s.size(); ++i) {
    if (isupper(s.at(i))) {
      if (i % 2 == 0) ans = false;
    } else {
      if (i % 2 == 1) ans = false;
    }
  }

  if (ans)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
