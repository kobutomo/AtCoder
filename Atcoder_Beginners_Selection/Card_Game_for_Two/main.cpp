#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  int N, alice = 0, bob = 0;
  scanf("%d", &N);
  vector<int> A(N);
  for (int &i : A) {
    scanf("%d", &i);
  }
  sort(A.begin(), A.end(), greater<int>());
  for (int i = 0; i < N; ++i) {
    if (i % 2 == 0)
      alice += A.at(i);
    else
      bob += A.at(i);
  }
  printf("%d\n", alice - bob);
}
