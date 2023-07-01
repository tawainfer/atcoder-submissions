// https://atcoder.jp/contests/abc217/submissions/25571910

#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  int count = 0;
  for(int i = 0; i < 3; i++) {
    cin >> S;
    if(S == "ABC") count++;
    else if(S == "ARC") count += 2;
    else if(S == "AGC") count += 3;
    else count += 4;
  }
  
  if(10 - count == 1) cout << "ABC";
  else if(10 - count == 2) cout << "ARC";
  else if(10 - count == 3) cout << "AGC";
  else cout << "AHC";
}
