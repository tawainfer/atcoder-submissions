#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto& i : a)
#define ll long long
#define nextp(v) next_permutation(all(v))
#define rep(i, x) for(int i = 0; i < (int)(x); i++)
#define reps(i, x) for(int i = 1; i <= (int)(x); i++)
#define rrep(i, x) for(int i = ((int)(x)-1); i >= 0; i--)
#define rreps(i, x) for(int i = ((int)(x)); i > 0; i--)
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;
  int t[n][n];
  rep(i, n) rep(j, n) cin >> t[i][j];

  vector<int> index;
  rep(i, n) index.push_back(i);

  ll ans = 0;
  do {
    ll sum = 0;
    rep(i, n) {
      int j;
      if(i == n - 1) j = 0;
      else j = i + 1;
      sum += t[index[i]][index[j]];
    }
    if(sum == k && index[0] == 0) ans++;
  } while(nextp(index)); 

  cout << ans;
}