#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  if (a % 2 == 0 || b % 2 == 0)
    printf("Even\n");
  else
    printf("Odd\n");
}
