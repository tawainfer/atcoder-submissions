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

  ll n;
  cin >> n;

  vector<bool> b(n + 1, false);
  vector<ll> ruiseki(n + 1, 0);
  vector<ll> a(n + 1);
  reps(i, 1, n) {
    cin >> a[i];
    if(a[i] == i) {
      ruiseki[i] = ruiseki[i - 1] + 1;
      b[i] = true;
    } else {
      ruiseki[i] = ruiseki[i - 1];
    }
  }

  ll ans = 0;
  reps(i, 1, n) {
    if(b[i]) {
      ans += ruiseki[n] - ruiseki[i];
    } else {
      if(i < a[i]) {
        if(a[a[i]] == i) ans++;
      } else {
        //if(a[a[i]] == i) ans++;
      }
    }
    //cout << i << " " << ans << endl;
  }

  cout << ans;
  return 0;
}