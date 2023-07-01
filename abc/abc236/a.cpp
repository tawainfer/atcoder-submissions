// https://atcoder.jp/contests/abc236/submissions/28720831

#include<bits/stdc++.h>
using namespace std;
int main() {
  string s; cin >> s;
  int a, b; cin >> a >> b;
  swap(s[a-1], s[b-1]);
  cout << s;
}
