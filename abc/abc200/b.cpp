// https://atcoder.jp/contests/abc200/submissions/26988163

#include <bits/stdc++.h>
using namespace std;
int main() {
  unsigned long long n, k; cin >> n >> k;
  for(int i = 0; i < k; i++) {
    if(n % 200 == 0) n /= 200;
    else n = n * 1000 + 200;
  }
  cout << n;  
}
