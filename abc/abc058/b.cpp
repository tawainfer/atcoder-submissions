// https://atcoder.jp/contests/abc058/submissions/29157098

#include <bits/stdc++.h>
using namespace std;
int main() {
  string a, b; cin >> a >> b;
  for(int i = 0; i < b.size(); i++) cout << a[i] << b[i];
  if(a.size() != b.size()) cout << a[a.size()-1];
}
