// https://atcoder.jp/contests/abc190/submissions/25679842

#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  if(C == 0) {
    if(A == 0 && B == 0) cout << "Aoki";
    
    for(int i = 0; A != 0 && B != 0; i++) {
      if(i % 2 == 0) A--;
      else B--;
      if(A == 0) cout << "Aoki";
      else if(B == 0) cout << "Takahashi";
    }
  } else {
    if(A == 0 && B == 0) cout << "Takahashi";
    
    for(int i = 0; A != 0 && B != 0; i++) {
      if(i % 2 == 0) B--;
      else A--;
      if(A == 0) cout << "Aoki";
      else if(B == 0) cout << "Takahashi";
    }
  }
}
