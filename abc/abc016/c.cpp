// https://atcoder.jp/contests/abc016/submissions/34355885

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

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n, m;
  cin >> n >> m;
  vector<int> vec[n + 1];
  int a[m], b[m];
  rep(i, 0, m) cin >> a[i] >> b[i];

  rep(i, 0, m) {
    vec[a[i]].push_back(b[i]);
    vec[b[i]].push_back(a[i]);
  }
  rep(i, 0, n) vec[i + 1].push_back(i + 1);

  reps(i, 1, n) sort(vec[i].begin(), vec[i].end());

  for(int i = 1; i < n + 1; i++) {
    int l = vec[i].size();
    map<int, int> mp;
    for(int j = 0; j < l; j++) {
      for(int k = 0; k < vec[vec[i][j]].size(); k++) {
        if(vec[i][j] != vec[vec[i][j]][k]) mp[vec[vec[i][j]][k]]++;
      }
    }

    int cnt = 0;
    fore(p, mp) rep(j, 0, l) if(p.first == vec[i][j]) cnt++;
    cout << mp.size() - cnt << "\n";
  }
}
