// https://atcoder.jp/contests/abc206/submissions/34359617

#include <bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define uint unsigned int
#define ushort unsigned short
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto &i : a)
#define nextp(v) next_permutation(all(v))
#define rep(i, a, b) for(int i = a; i < b; i++)
#define reps(i, a, b) for(int i = a; i <= b; i++)
#define rrep(i, a, b) for(int i = a; i > b; i--)
#define rreps(i, a, b) for(int i = a; i >= b; i--)
#define repv(i, a, b, c) for(int i = a; i < b; i += c)
#define repsv(i, a, b, c) for(int i = a; i <= b; i += c)
#define rrepv(i, a, b, c) for(int i = a; i > b; i -= c)
#define rrepsv(i, a, b, c) for(int i = a; i >= b; i -= c)
template<class T> bool chmax(T &a, T &b) { return a < b ? (a = b, 1) : 0; }
template<class T> bool chmin(T &a, T &b) { return a > b ? (a = b, 1) : 0; }
using namespace std;

void dfs(int i, vector<bool> &b, vector<vector<int>> &g) {
  if(!b[i]) return;
  b[i] = false;
  fore(z, g[i]) dfs(z, b, g);
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n;
  cin >> n;

  int ans = 0;
  vector<bool> seen(200009, false);

  vector<int> a(n);
  fore(z, a) {
    cin >> z;
    if(!seen[z]) {
      seen[z] = true;
      ans++;
    }
  }

  vector<vector<int>> g(200009);
  int l = 0, r = n - 1;
  while(l < r) {
    g[a[l]].push_back(a[r]);
    g[a[r]].push_back(a[l]);
    l++;
    r--;
  }

  reps(i, 1, 200000) {
    if(seen[i]) {
      ans--;
      dfs(i, seen, g);
    }
  }

  cout << ans;
  return 0;
}
