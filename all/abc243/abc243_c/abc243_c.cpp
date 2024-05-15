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

  map<int, pair<int, int>> judge;
  int n;
  cin >> n;
  int x[n], y[n];
  rep(i, n) {
    cin >> x[i] >> y[i];
    judge[y[i]] = make_pair(-1000000009, 1000000009);
  }

  char c;
  rep(i, n) {
    cin >> c;
    if(c == 'L' && judge[y[i]].first < x[i]) {
      judge[y[i]].first = x[i];
    }
    if(c == 'R' && judge[y[i]].second > x[i]) {
      judge[y[i]].second = x[i];
    }
  }

  fore(z, judge) {
    if(z.second.first >= z.second.second) {
      cout << "Yes";
      return 0;
    }
  }

  cout << "No";
}