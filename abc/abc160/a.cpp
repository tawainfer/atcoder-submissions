// https://atcoder.jp/contests/abc160/submissions/26203677

#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<char> s(6);
  for(int i = 0; i < 6; i++) cin >> s.at(i);
  if(s.at(2) == s.at(3) && s.at(4) == s.at(5)) cout << "Yes";
  else cout << "No";
}
