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

  int n; cin >> n;
  n %= 30;

  vector<int> ans = {123456, 213456, 231456, 234156, 234516, 234561, 324561, 342561, 345261, 345621, 345612, 435612, 453612, 456312, 456132, 456123, 546123, 564123, 561423, 561243, 561234, 651234, 615234, 612534, 612354, 612345, 162345, 126345, 123645, 123465};

  cout << ans[n] << "\n";
}