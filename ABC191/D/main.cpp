#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  long double X1, Y1, R1;
  long long minY, maxY, minX, maxX, ans = 0;
  cin >> X1 >> Y1 >> R1;
  long long X, Y, R, x1, x2;

  int POW = 10000;

  X = round(X1 * POW);
  Y = round(Y1 * POW);
  R = round(R1 * POW);
  minY = ceil(Y1 - R1) * POW;
  maxY = floor(Y1 + R1) * POW;
  for (long long i = minY; i <= maxY; i += POW) {
    long long y = i;
    x1 = -sqrt(R * R - (y - Y) * (y - Y)) + X;
    x2 = sqrt(R * R - (y - Y) * (y - Y)) + X;
    if (x1 % POW)
      minX = x1 / POW + 1;
    else
      minX = x1 / POW;

    maxX = x2 / POW;
    if (maxX >= minX)
      ans += maxX - minX + 1;
  }
  cout << ans << endl;
}
