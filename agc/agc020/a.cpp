// https://atcoder.jp/contests/agc020/submissions/28660758

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, a, b; cin >> n >> a >> b;
  if(n == 0) {
    cout << "Draw";
  } else {
    for(int i = 0; ; i++) {
      if(i % 2 == 0) {
        if((a == 0 && b == 1) || (a == n && b == n - 1)) {
          cout << "Borys";
          return 0;
        } else {
          if(a < b) {
            if(a + 1 == b) a--;
            else a++;
          } else {
            if(a - 1 == b) a++;
            else a--;
          }
        }
      } else {
        if((b == 0 && a == 1) || (b == n && a == n - 1)) {
          cout << "Alice";
          return 0;
        } else {
          if(b < a) {
            if(b + 1 == a) b--;
            else b++;
          } else {
            if(b - 1 == a) b++;
            else b--;
          }
        }
      }
    }
  }
}
