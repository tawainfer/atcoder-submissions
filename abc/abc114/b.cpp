// https://atcoder.jp/contests/abc114/submissions/29032826

#include <bits/stdc++.h>
using namespace std;
int main() {
  int judge = 0, min = 1000;
  string s; cin >> s;
  for(int i = 2; i < s.size(); i++) {
    judge = (s[i-2] - '0') * 100 + (s[i-1] - '0') * 10 + s[i] - '0';
    if(abs(judge - 753) < min) min = abs(judge - 753);
    judge = 0;
  }
  cout << min;
}
