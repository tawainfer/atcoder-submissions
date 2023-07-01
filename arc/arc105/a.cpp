// https://atcoder.jp/contests/arc105/submissions/27184629

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n[4];
  for(int i = 0; i < 4; i++) cin >> n[i];
  sort(n, n + 4);
  if(n[0]+n[3]==n[1]+n[2]||n[0]+n[1]+n[2]==n[3]) cout << "Yes";
  else cout << "No";
}
