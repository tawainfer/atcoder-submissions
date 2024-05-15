#include <bits/stdc++.h>
using namespace std;
int main() {
  long long h, w; cin >> h >> w;
  if(h == 1 || w == 1) cout << 1;
  else if(h % 2 == 1 && w % 2 == 1) cout << h * w / 2 + 1;
  else cout << h * w / 2;
}