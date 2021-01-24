#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  char s[3];
  int ans = 0;
  scanf("%s", s);
  for (int i = 0; i < 3; ++i) {
    if (s[i] == '1')
      ans++;
  }
  printf("%d", ans);
}
