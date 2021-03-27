#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int N;
vector<ll> OR;
ll A[25];
ll mini = 1 << 30;

void rec(int i, ll tmp) {
  if (i == N) {
    OR.push_back(tmp);
    ll ans = 0;
    for (int j = 0; j < OR.size(); ++j) {
      ll cur = OR.at(j);
      ans = ans ^ cur;
    }
    if (ans < mini) mini = ans;
    OR.pop_back();
    return;
  }
  rec(i + 1, tmp | A[i]);
  OR.push_back(tmp);
  rec(i + 1, A[i]);
  OR.pop_back();
}

int main() {
  cin >> N;
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }
  rec(1, A[0]);
  cout << mini << endl;
}
