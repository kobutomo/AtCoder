#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  int N;
  scanf("%d", &N);
  vector<int> D(N);
  for (int i = 0; i < N; ++i) {
    scanf("%d", &D.at(i));
  }
  sort(D.begin(), D.end());
  auto itr = unique(D.begin(), D.end());
  D.erase(itr, D.end());
  printf("%zu\n", D.size());
}
