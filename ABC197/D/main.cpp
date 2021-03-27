#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {
  double N, x0, y0, x2, y2;
  cin >> N >> x0 >> y0 >> x2 >> y2;
  double xc, yc;
  xc = (x0 + x2) / 2;
  yc = (y0 + y2) / 2;
  double rad = 2 * M_PI / N;
  double fx0, fy0;
  fx0 = x0 - xc;
  fy0 = y0 - yc;
  double x1 = cos(rad) * fx0 - sin(rad) * fy0 + xc;
  double y1 = sin(rad) * fx0 + cos(rad) * fy0 + yc;
  cout << x1 << " " << y1 << endl;
}
