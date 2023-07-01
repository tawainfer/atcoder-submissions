// https://atcoder.jp/contests/abc247/submissions/30881199

#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fixed fixed << setprecision(20)
#define fore(i, a) for(auto& i : a)
#define ll long long
#define rep(i, x) for(int i = 0; i < (int)(x); i++)
#define reps(i, x) for(int i = 1; i <= (int)(x); i++)
#define rrep(i, x) for(int i = ((int)(x)-1); i >= 0; i--)
#define rreps(i, x) for(int i = ((int)(x)); i > 0; i--)
#define y0 y5380520
#define y1 y5380520
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll q, x, c; cin >> q;
  vector<pair<ll, ll>> cylinder;
  while(cin >> q) {
    if(q == 1) {
      cin >> x >> c;
      cylinder.push_back(make_pair(x, c));
    } else {
      ll sum = 0;
      cin >> c;
      while(c > 0) {
        if(c < cylinder[0].second) {
          sum += c * cylinder[0].first;
          cylinder[0].second -= c;
          break;
        } else {
          sum += cylinder[0].second * cylinder[0].first;
          c -= cylinder[0].second;
          cylinder.erase(cylinder.begin());
        }
      }
      cout << sum << "\n";
    }
  }
}
