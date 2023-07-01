// https://atcoder.jp/contests/abc090/submissions/26588957

#include<bits/stdc++.h>
using namespace std;
int main() {
  char s;
  for(int i = 0; i < 9; i++) {
    cin >> s;
    if(i == 0 || i == 4 || i == 8) cout << s;
  }
}
