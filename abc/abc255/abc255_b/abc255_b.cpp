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

  ll k, n;
  cin >> n >> k;
  set<ll> a;
  rep(i, 0, k) {
    ll b;
    cin >> b;
    a.insert(b);
  }
  
  vector<double> cnt(n, 1e9);
  
  vector<int> x(n), y(n);
  rep(i, 0, n) cin >> x[i] >> y[i];
  
  double ans = -1e9;
  
  rep(i, 0, n) rep(j, 0, n) {
    if(i != j || i == j) {
      double d = sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));
      if(a.count(i + 1) > 0 && a.count(j + 1) > 0) {
        if(d / 2 > ans) {
          cnt[i] = min(d / 2, cnt[i]);
          cnt[j] = min(d / 2, cnt[j]);
        }
      }
      if(a.count(i + 1) > 0 || a.count(j + 1) > 0) {
        if(d > ans) {
          cnt[i] = min(d, cnt[i]);
          cnt[j] = min(d, cnt[j]);
        }
      }
      if(a.count(i + 1) == 0 && a.count(j + 1) == 0) {
        
      }
      //cout << d << " " << i << " " << j << " " << ans << endl;
    }
  }
  
  rep(i, 0, n) if(cnt[i] != 1e9) ans = max(ans, cnt[i]);
  
  if(ans == -1e9) {
    cout << 0;
    return 0;
  }
  
  cout << fix(10) << ans;
  return 0;
}