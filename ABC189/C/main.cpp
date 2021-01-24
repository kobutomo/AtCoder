#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int N;

int findMax(int l, int r, vector<int> A) {
  int minI = min_element(A.begin() + l, A.begin() + r + 1) - A.begin();
  int minE = A.at(minI);
  int ma = minE * (r - l + 1);
  int lMax;
  int rMax;
  if (minI == l)
    lMax = minE;
  else
    lMax = findMax(l, minI - 1, A);
  if (minI == r)
    rMax = minE;
  else
    rMax = findMax(minI + 1, r, A);
  ma = max(ma, lMax);
  return max(ma, rMax);
}

int main() {
  cin >> N;
  vector<int> A(N);
  for (int &p : A)
    cin >> p;

  cout << findMax(0, N - 1, A) << endl;
  return 0;
}
