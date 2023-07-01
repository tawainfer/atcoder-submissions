// https://atcoder.jp/contests/abc254/submissions/32210936

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto& i : a)
#define ll long long
#define nextp(v) next_permutation(all(v))
#define rep(i, a, b) for(int i = a; i < b; i++)
#define reps(i, a, b) for(int i = a; i <= b; i++)
#define rrep(i, a, b) for(int i = a; i > b; i--)
#define rreps(i, a, b) for(int i = a; i >= b; i--)
#define repv(i, a, b, c) for(int i = a; i < b; i += c)
#define repsv(i, a, b, c) for(int i = a; i <= b; i += c)
#define rrepv(i, a, b, c) for(int i = a; i > b; i -= c)
#define rrepsv(i, a, b, c) for(int i = a; i >= b; i -= c)
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<int> a[59];
  n++;
  
  rep(i, 0, n) {
    rep(j, 0, i) {
      if(j == 0 || j == i) a[i].push_back(1);
      else a[i].push_back(a[i - 1][j - 1] + a[i - 1][j]);
    }
  }
  
  rep(i, 0, n) {
    rep(j, 0, i) {
      cout << a[i][j];
      if(j == i - 1) cout << endl;
      else cout << " ";
    }
  }
}
