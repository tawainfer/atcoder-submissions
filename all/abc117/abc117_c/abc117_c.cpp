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

  int n, m;
  cin >> n >> m;

  deque<int> x(m);
  fore(z, x) cin >> z;
  sort(all(x));

  vector<int> d;
  rep(i, 1, m) {
    d.push_back(x[i] - x[i - 1]);
  }
  sort(all(d));
  //reverse(all(d));

  if(n < m) {
    int ans = 0;
    rep(i, 0, m - n) ans += d[i];
    cout << ans;
  } else {
    cout << 0;
  }

  return 0;
}