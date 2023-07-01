// https://atcoder.jp/contests/abc131/submissions/26569527

#include <bits/stdc++.h>
using namespace std;
int main() {
  string ans = "Good";
  vector<char> n(4);
  for(int i = 0; i < 4; i++) cin >> n.at(i);
  for(int i = 1; i < 4; i++) if(n.at(i - 1) == n.at(i)) ans = "Bad";
  cout << ans;
}
