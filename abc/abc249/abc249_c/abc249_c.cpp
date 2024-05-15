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
#define y0 y20210831 // Hello, World
#define y1 y20220320 // Brown
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;
  bool cnt[19][123];
  rep(i, 19) rep(j, 123) cnt[i][j] = false;

  rep(i, n) {
    string a;
    cin >> a;
    fore(z, a) {
      int onetime = z - 0;
      cnt[i][onetime] = true;
    }
  }

  ll ans = 0;

  rep(bit, (1 << n)) {
    ll judge[123];
    rep(i, 123) judge[i] = 0;

    rep(i, n) {
      if(bit & (1 << i)) {
        for(int j = 97; j <= 122; j++) {
          if(cnt[i][j]) judge[j]++;
        }
      }
    }
    
    ll count = 0;
    for(int j = 97; j <= 122; j++) if(judge[j] == k) count++;
    ans = max(ans, count);
  }

  cout << ans;
}