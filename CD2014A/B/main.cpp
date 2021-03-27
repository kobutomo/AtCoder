#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
  string A;
  int B;
  cin >> A >> B;
  int index = B % A.size() == 0 ? A.size() - 1 : B % A.size() - 1;
  cout << A.at(index) << endl;
}
