#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int n, m, k;
int N[100] = {0};
pair<int, int> K[17], M[101];

int rec(int i) {
  if (i == k) {
    int cnt = 0;
    for (int j = 0; j < m; ++j) {
      auto[f, s] = M[j];
      if (N[f] && N[s]) cnt++;
    }
    return cnt;
  }

  auto[f, s] = K[i];
  N[f]++;
  int sum1 = rec(i + 1);
  N[f]--;
  N[s]++;
  int sum2 = rec(i + 1);
  N[s]--;
  return max(sum1, sum2);
}

int main() {
  cin >> n >> m;
  for (int i = 0; i < m; ++i)
    cin >> M[i].first >> M[i].second;
  cin >> k;
  for (int i = 0; i < k; ++i)
    cin >> K[i].first >> K[i].second;
  cout << rec(0) << endl;
}
