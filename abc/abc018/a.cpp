// https://atcoder.jp/contests/abc018/submissions/26662515

#include <bits/stdc++.h>
using namespace std;
int main() {
  int i = 0;
  vector<int> n(3);
  while(cin >> n[i]) i++;
  for(int i = 0; i < 3; i++) {
    if(max({n[0], n[1], n[2]}) == n[i]) cout << 1;
    else if(min({n[0], n[1], n[2]}) == n[i]) cout << 3;
    else cout << 2;
    cout << endl;
  }
}
