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
#define y0 y20210904 // Gray
#define y1 y20220319 // Brown
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll n, w;
  cin >> n >> w;
  
  vector<int> a(n);
  fore(z, a) cin >> z;
  
  set<ll> ans;
  
  rep(i, 0, n) rep(j, i + 1, n) rep(k, j + 1, n) {
    ll sum = a[i] + a[j] + a[k];
    if(sum <= w) ans.insert(sum);
  }
  
  rep(i, 0, n) rep(j, i + 1, n) {
    ll sum = a[i] + a[j];
    if(sum <= w) ans.insert(sum);
  }
  
  rep(i, 0, n) {
    ll sum = a[i];
    if(sum <= w) ans.insert(sum);
  }
  
  cout << ans.size();
}