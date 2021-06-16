#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;

  vector<long long> A(N);
  for (auto& x : A) {
    cin >> x;
  }

  vector<long long> low(N);
  for (int i = 0; i < N; ++i) {
    low[i] = A[i] - (i + 1);
  }

  for (int i = 0; i < Q; i++) {
    long long K;
    cin >> K;
    const int idx = lower_bound(low.begin(), low.end(), K) - low.begin();
    if (idx == 0) {
      cout << K << '\n';
    } else {
      cout << A[idx - 1] + K - low[idx - 1] << '\n';
    }
  }
  return 0;
}