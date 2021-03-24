#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
  int N, a, cnt = 0, D[110000] = {0};
  cin >> N;
  for (int i = 0; i < N; ++i) {
    cin >> a;
    D[a]++;
  }
  for (int i = 1; i < N; ++i) {
    int sum = D[i - 1] + D[i] + D[i + 1];
    if (sum > cnt) cnt = sum;
  }
  if (N == 1)
    cout << 1 << endl;
  else
    cout << cnt << endl;
}
