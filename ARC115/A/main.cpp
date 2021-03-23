#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
  int N, M;
  ll odd = 0, even = 0;
  string S;
  cin >> N >> M;
  for (int i = 0; i < N; ++i) {
    cin >> S;
    int num = count(S.begin(), S.end(), '1') % 2;
    if (num == 0) even++;
    else odd++;
  }
  cout << even * odd << endl;
}
