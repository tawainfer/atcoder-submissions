// https://atcoder.jp/contests/abc115/submissions/42758573

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> bs;
vector<ll> pc;

ll rec(ll n, ll x) {
  if(n == 0) return 1LL;

  if(x == 1) return 0LL;
  else if(x <= (1 + bs[n - 1])) return rec(n - 1, x - 1);
  else if(x == (2 + bs[n - 1])) return pc[n - 1] + 1;
  else if(x < bs[n]) return pc[n - 1] + 1 + rec(n - 1, x - (bs[n - 1] + 2));
  else return pc[n];
}

int main() {
  ll n, x;
  cin >> n >> x;

  bs.push_back(1);
  pc.push_back(1);
  for(int i = 0; i < 50; i++) {
    bs.push_back(bs.back() * 2 + 3);
    pc.push_back(pc.back() * 2 + 1);
  }

  cout << rec(n, x);
  return 0;
}
