// https://atcoder.jp/contests/abc047/submissions/33563380

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

  ll w, h, n;
  cin >> w >> h >> n;

  ll left = 0, right = w, up = h, down = 0;
  ll x, y, a;
  while(cin >> x >> y >> a) {
    if(a == 1) left = max(left, x);
    if(a == 2) right = min(right, x);
    if(a == 3) down = max(down, y);
    if(a == 4) up = min(up, y);
  }

  if(left < right && down < up) {
    cout << abs(right - left) * abs(up - down);
  } else cout << 0; 
  return 0;
}
