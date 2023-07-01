// https://atcoder.jp/contests/abc215/submissions/34304281

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

  vector<bool> exist(100009, false);
  vector<int> a;
  int x;
  while(cin >> x) {
    if(!exist[x]) {
      a.push_back(x);
      exist[x] = true;
    }
  }
  sort(all(a));
  reps(i, 1, 100000) exist[i] = false;

  set<int> y;
  fore(z, a) {
    if(z != 1) y.insert(z);
    for(int i = 2; i * i <= z; i++) {
      if(z % i == 0) {
        y.insert(i);
        y.insert(z / i);
      }
    }
  }

  fore(z, y) {
    int x = z;
    while(x <= 100000) {
      exist[x] = true;
      x += z;
    }
  }

  vector<int> ans;
  reps(i, 1, m) if(!exist[i]) ans.push_back(i);

  cout << ans.size() << "\n";
  fore(z, ans) cout << z << "\n";
  return 0;
}
