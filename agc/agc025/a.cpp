// https://atcoder.jp/contests/agc025/submissions/27952973

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, sum = 0; cin >> n;
    if(n == 10 || n == 100 || n == 1000 || n == 10000 || n == 100000) cout << 10 << endl;
    else {
      while(n > 0) sum += n % 10, n /= 10;
      cout << sum << endl;
    }
}
