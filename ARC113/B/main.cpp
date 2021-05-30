#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
  string A;
  ll B, C;
  cin >> A >> B >> C;
  int la = *(A.end() - 1) - '0';
  ll a = B * C - ((B * C / 4) * 4);

  ll ans = powl(la, a - 1);
  ans = ans % 10;
  cout << ans << endl;
}
