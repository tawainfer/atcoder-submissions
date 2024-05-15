#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool is_squere(long long N) {
    long long r = (long long)floor(sqrt((long double)N));  // 切り捨てした平方根
    return (r * r) == N;
}

int main() {
  ll t;
  cin >> t;

  ll n;
  while(cin >> n) {
    for(ll i = 2; i < 1000000000000000000LL; i++) {
      if(n % i == 0) {
        if(is_squere(n / i)) {
          cout << (long long)floor(sqrt((long double)(n / i))) << " " << i << "\n";
        } else {
          cout << i << " " << n / (i * i) << "\n";
        }

        break;
      }
    }
  }
}