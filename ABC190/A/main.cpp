#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (c == 0) {
    if (a > b)
      cout << "Takahashi" << endl;
    else
      cout << "Aoki" << endl;
  } else {
    if (b > a)
      cout << "Aoki" << endl;
    else
      cout << "Takahashi" << endl;
  }
}
