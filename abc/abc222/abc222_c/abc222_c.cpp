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
#define y0 y20210904 // Gray
#define y1 y20220319 // Brown
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;
  vector<string> a(2 * n);
  fore(z, a) cin >> z;

  vector<pair<int, int>> rank(2 * n);
  reps(i, 2 * n) rank[i-1] = make_pair(0, i);

  rep(i, m) {
    for(int j = 0; j < 2 * n; j += 2) {
      char c1 = a[rank[j].second - 1][i];
      char c2 = a[rank[j + 1].second - 1][i];

      int p1;
      if(c1 == 'G') p1 = 0;
      else if(c1 == 'C') p1 = 1;
      else p1 = 2;

      int p2;
      if(c2 == 'G') p2 = 0;
      else if(c2 == 'C') p2 = 1;
      else p2 = 2;

      int vs = (p1 - p2 + 3) % 3;

      if(vs == 1) rank[j+1].first--;
      if(vs == 2) rank[j].first--;
    }

    sort(all(rank));
  }

  fore(z, rank) cout << z.second << "\n";
}