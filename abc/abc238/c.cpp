// https://atcoder.jp/contests/abc238/submissions/35390403

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
class UnionFind {
  public:
  UnionFind() = default;
  explicit UnionFind(size_t n) : m_parentsOrSize(n, -1) {}

  int root(int i) {
    if(m_parentsOrSize[i] < 0) return i;
    return (m_parentsOrSize[i] = root(m_parentsOrSize[i]));
  }

  void merge(int a, int b) {
    a = root(a);
    b = root(b);
    if(a != b) {
      if(-m_parentsOrSize[a] < -m_parentsOrSize[b]) swap(a, b);
      m_parentsOrSize[a] += m_parentsOrSize[b];
      m_parentsOrSize[b] = a;
    }
  }

  bool same(int a, int b) { return (root(a) == root(b)); }

  int size(int i) { return -m_parentsOrSize[root(i)]; }

  private:
  vector<int> m_parentsOrSize;
};
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

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  ll mod = 998244353;
  ll n;
  cin >> n;

  vector<ll> power = {1};
  reps(i, 1, 18) power.push_back(power.back() * 10);

  ll sum = 0;
  reps(i, 1, 18) {
    if(n < power[i - 1]) break;
    ll k = min(n, power[i] - 1);
    ll d = k - power[i - 1] + 1;
    
    ll s = ((d % mod) * ((d + 1) % mod) % mod * 499122177) % mod;
    sum += s;
    sum %= mod;
    //cout << i << " " << sum << " " << s << " " << d << endl;
  }
  
  cout << sum;
  return 0;
}
