// https://atcoder.jp/contests/abc029/submissions/28646017

#include <bits/stdc++.h>
using namespace std;
int main() {
  int check = 0, cnt = 0;
  string s;
  while(cin >> s) {
    for(int i = 0; i < s.size(); i++) {
      if(s[i] == 'r') check = 1;
    }
    if(check == 1) cnt++;
    check = 0;
  }
  cout << cnt << endl;
}
