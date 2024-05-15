#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll a, b;
  cin >> a >> b;
  ll cnt = 0;

  while(a != b) {
    if(a > b) {
      cnt += a / b;
      a %= b;
    } else {
      cnt += b / a;
      b %= a;
    }
    
    if(a == 0 || b == 0) {
      cout << cnt - 1;
      return 0;
    }
  }

  cout << cnt;
}