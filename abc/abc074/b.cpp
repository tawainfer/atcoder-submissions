// https://atcoder.jp/contests/abc074/submissions/25480023

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K, X, dis, count = 0;
  cin >> N >> K;
  
  for(int i = 0; i < N; i++) {
    cin >> X;
    
    if(K >= X) {
      dis = K - X;
    } else {
      dis = X - K;
    }
    
    if(X <= dis) {
      count += X * 2;
    } else {
      count += dis * 2;
    }
  }
  
  cout << count;
}
