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

  int f[n][10];
  rep(i, 0, n) rep(j, 0, 10) cin >> f[i][j];
  int p[n][11];
  rep(i, 0, n) rep(j, 0, 11) cin >> p[i][j];

  int ans = -1e9;
  rep(bit, 1, (1 << 10)) {
    vector<int> cnt(n, 0);
    rep(i, 0, 10) if(bit & (1 << i)) rep(j, 0, n) if(f[j][i]) cnt[j]++;

    int sum = 0;
    rep(i, 0, n) sum += p[i][cnt[i]];
    ans = max(ans, sum);

    //cout << bit << " " << ans << endl;
  }

  cout << ans;
  return 0;
}