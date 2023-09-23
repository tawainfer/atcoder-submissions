// https://atcoder.jp/contests/arc165/submissions/45807197

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

template <typename T>
vector<pair<T, T>> prime_factor(T n) {
    vector<pair<T, T>> ret;
    for (T i = 2; i * i <= n; i++) {
        if (n % i != 0) continue;
        T tmp = 0;
        while (n % i == 0) {
            tmp++;
            n /= i;
        }
        ret.push_back(make_pair(i, tmp));
    }
    if (n != 1) ret.push_back(make_pair(n, 1));
    return ret;
}

int main() {
  ll t;
  cin >> t;

  for(int i = 0; i < t; i++) {
    ll n;
    cin >> n;

    vector<pair<ll, ll>> res = prime_factor(n);
    ll sum = 0;
    ll cnt = 0;
    for(auto p : res) {
      cnt++;
      sum += p.first;
    }

    if(sum <= n && cnt >= 2) {
      cout << "Yes\n";
    } else {
      cout << "No\n";
    }
  }
}
