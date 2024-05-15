#include <bits/stdc++.h>
using namespace std;
int main() {
  int l, r, d, count = 0;
  cin >> l >> r >> d;
  for(; l <= r; l++) if(l % d == 0) count++;
  cout << count;
}