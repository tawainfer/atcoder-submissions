// https://atcoder.jp/contests/abc033/submissions/30786473

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

  int n;
  cin >> n;
  double sum = 0;
  vector<pair<int, string>> p(n);
  rep(i, n) {
    cin >> p[i].second >> p[i].first;
    sum += p[i].first;
  };

  sort(all(p));
  reverse(all(p));

  if(p[0].first / sum > 0.5) cout << p[0].second << "\n";
  else cout << "atcoder\n";
}
