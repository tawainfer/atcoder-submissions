// https://atcoder.jp/contests/abc226/submissions/31599549

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto& i : a)
#define ll long long
#define nextp(v) next_permutation(all(v))
#define rep(i, a, b) for(int i = a; i < b; i++)
#define reps(i, a, b) for(int i = a; i <= b; i++)
#define rrep(i, a, b) for(int i = a; i > b; i--)
#define rreps(i, a, b) for(int i = a; i > b; i--)
#define repv(i, a, b, c) for(int i = a; i < b; i += c)
#define repsv(i, a, b, c) for(int i = a; i <= b; i += c)
#define rrepv(i, a, b, c) for(int i = a; i > b; i -= c)
#define rrepsv(i, a, b, c) for(int i = a; i > b; i -= c)
using namespace std;

  ll n; 
  ll tim = 0;
  vector<ll> t, k;
  vector<ll> path[200009];
  vector<bool> master(200009, false);

void dfs(int i) {
  master[i] = true;
  tim += t[i];

  fore(z, path[i]) {
    if(!master[z]) dfs(z);
  }
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  cin >> n;
  t.resize(200009);
  k.resize(200009);
  
  reps(i, 1, n) {
    cin >> t[i] >> k[i];
    while(k[i]--) {
      ll a;
      cin >> a;
      path[i].push_back(a);
    }
  }

  dfs(n);
  cout << tim << "\n";
}
