#include <bits/stdc++.h>
using namespace std;
int main() {
  int x, y, cnt = 0; cin >> x >> y;
  for(; x < y; x += 10) cnt++;
  cout << cnt;
}