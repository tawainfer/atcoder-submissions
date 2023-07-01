// https://atcoder.jp/contests/abc033/submissions/26616561

#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<char> n(4);
  for(int i = 0; i < 4; i++) cin >> n[i];
  if(n[0] == n[1] && n[2] == n[1] && n[2] == n[3]) cout << "SAME";
  else cout << "DIFFERENT";
  cout << endl;
}
