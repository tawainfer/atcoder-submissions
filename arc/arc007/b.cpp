// https://atcoder.jp/contests/arc007/submissions/31479577

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

int n, m, a[10000], b;

int main() {
  cin >> n >> m;
  reps(i, n) a[i] = i;
  rep(i, m) {
    cin >> b;
    reps(j, n) if(a[j] == b) {
      swap(a[0], a[j]);
      break;
    }
  }
  reps(i, n) cout << a[i] << '\n';
}
