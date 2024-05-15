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

  vector<int> h(n);
  fore(z, h) cin >> z;

  //int s, g;
  int ans = 0;

  rrep(high, 100, 0) {
    bool start = false;
    rep(i, 0, n) {
      if(h[i] > 0) {
        if(!start) start = true;
        h[i]--;
      } else {
        if(start) ans++;
        start = false;
      }

      if(start && i == n - 1) ans++;
    }
  }

  cout << ans;
  return 0;
}