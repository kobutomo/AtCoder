#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  string s;
  cin >> s;
  for (int i = 0; i < s.size();) {
    if (s.substr(i, 5) == "dream") {
      if (s.substr(i + 5, 2) == "er") {
        if (s[i + 7] == 'e' || s[i + 7] == 'd' || i + 7 == s.size()) {
          i += 7;
          continue;
        } else {
          i += 5;
          continue;
        }
      } else {
        i += 5;
        continue;
      }
    } else if (s.substr(i, 5) == "erase") {
      if (s.substr(i + 4, 2) == "er") {
        if (s[i + 6] == 'e' || s[i + 6] == 'd' || i + 6 == s.size()) {
          i += 6;
          continue;
        } else {
          i += 5;
          continue;
        }
      } else {
        i += 5;
        continue;
      }
    }
    cout << "NO" << endl;
    return 0;
  }
  cout << "YES" << endl;
}
