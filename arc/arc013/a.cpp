// https://atcoder.jp/contests/arc013/submissions/31480152

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

  vector<int> a(3), b(3);
  fore(z, a) cin >> z;
  fore(z, b) cin >> z;
  sort(all(b));
  
  int ans = 0;
  do ans = max(ans, (a[0] / b[0]) * (a[1] / b[1]) * (a[2] / b[2]));
  while(nextp(b));
  
  cout << ans << "\n";
}
