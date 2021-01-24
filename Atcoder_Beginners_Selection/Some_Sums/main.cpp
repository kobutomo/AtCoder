#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  int N, A, B, ans = 0;
  cin >> N >> A >> B;
  for (int i = 1; i <= N; ++i) {
    int sum = 0;
    int j = i;
    while (j != 0) {
      sum += j % 10;
      j /= 10;
    }
    if (sum >= A && sum <= B)
      ans += i;
  }

  cout << ans << endl;
}
