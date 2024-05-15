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
  vector<int> runner;
  rep(i, 0, n) runner.push_back(i);

  int a[n][n];
  rep(i, 0, n) rep(j, 0, n) cin >> a[i][j];

  int m;
  cin >> m;

  vector<int> bad[n];
  int x, y;
  while(cin >> x >> y) {
    bad[x - 1].push_back(y - 1);
    bad[y - 1].push_back(x - 1);
  }
  
  ll ans = 1e18;
  do {
    ll sum = 0;
    bool goal = true;

    rep(i, 0, runner.size() - 1) {
      if(count(all(bad[runner[i]]), runner[i + 1]) != 0) goal = false;
      sum += a[runner[i]][i];
    }
    sum += a[runner.back()][runner.size() - 1];

    if(goal) ans = min(ans, sum);
  } while(nextp(runner));

  cout << (ans == 1e18 ? -1 : ans);
  return 0;
}