// https://atcoder.jp/contests/abc268/submissions/34759715

#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto &i : a)
#define ll long long
#define nextp next_permutation
#define rep(i, a, b) for(int i = a; i < b; i++)
#define reps(i, a, b) for(int i = a; i <= b; i++)
#define rrep(i, a, b) for(int i = a; i > b; i--)
#define rreps(i, a, b) for(int i = a; i >= b; i--)
#define repv(i, a, b, c) for(int i = a; i < b; i += c)
#define repsv(i, a, b, c) for(int i = a; i <= b; i += c)
#define rrepv(i, a, b, c) for(int i = a; i > b; i -= c)
#define rrepsv(i, a, b, c) for(int i = a; i >= b; i -= c)
#define ull unsigned ll
template<class T> bool chmin(T &a, T &b) { return a > b ? (a = b, 1) : 0; }
template<class T> bool chmax(T &a, T &b) { return a < b ? (a = b, 1) : 0; }
template<class T> void lower(T &a) { a = numeric_limits<T>::min(); }
template<class T> void upper(T &a) { a = numeric_limits<T>::max(); }
template<class T> vector<T> divisor_enumeration(T &a) {
  vector<T> v;
  for(T i = 1; i * i <= a; i++) {
    if(a % i != 0) continue;
    v.push_back(i);
    if(i != a / i) v.push_back(a / i);
  }
  sort(v.begin(), v.end());
  return v;
}
template<class T> vector<T> prime_factorization(T a) {
  vector<T> v;
  for(T i = 2; i * i <= a; i++) {
    while(a % i == 0) {
      a /= i;
      v.push_back(i);
    }
  }
  if(a >= 2) v.push_back(a);
  return v;
}
template<class T> vector<bool> eratosthenes(T &a) { // 2e8 + 9
  long long b = a;
  b = min(b, 200000009LL);
  int c = b;
  vector<bool> v(c + 1, true);
  v[0] = false;
  v[1] = false;
  for(int i = 2; i * i <= c; i++) {
    if(v[i]) {
      for(int j = 2; i * j <= c; j++) v[i * j] = false;
    }
  }
  return v;
}

/*

  @tawainfer

  2021-09-04 Gray
  2022-03-19 Brown
  2022-08-27 Green

  ξ(･_･)ξ I'll do my best! ξ(･_･)ξ

*/

set<string> se;
bool ans = false;
string output = "-1";

vector<string> an;

void dfs(vector<ll> v, ll si, vector<string> ptn, ll saidai) {
  if(v.size() == si) {
    string x = "";
    rep(i, 0, (int)ptn.size()) {
      x += ptn[i];
      if(i != ptn.size() - 1) rep(k, 0, v[i]) x += "_";
    }

    if(se.count(x) == 0 && x.size() >= 3) {
      ans = true;
      an.push_back(x);
    }
    return;
  }

  if(saidai == 0) return;
  reps(i, 1, saidai) {
    v.push_back(i);
    saidai -= i;
    dfs(v, si, ptn, saidai);
    saidai += i;
    v.pop_back();
  }
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  ll n, m;
  cin >> n >> m;

  vector<string> s(n);
  fore(z, s) cin >> z;

  vector<string> t(m);
  vector<string> cut[m];

  rep(i, 0, m) {
    cin >> t[i];
    se.insert(t[i]);
  }

  vector<ll> nep;
  rep(i, 0, n) nep.push_back(i);

  rep(bit, (1LL << n) - 1, (1LL << n)) {
    if(ans) break;

    do {
      vector<string> ptn;
      fore(z, nep) ptn.push_back(s[z]);
      string x = "";
      fore(z, ptn) x += z;
      if(x.size() + (ptn.size() - 1) > 16) break;

      ll saidai = 16 - x.size();
      ll si = ptn.size() - 1;
      vector<ll> v;
      dfs(v, si, ptn, saidai);

    } while(nextp(all(nep)));
  }

  if(!ans) cout << output;
  else cout << an.front();
  return 0;
}
