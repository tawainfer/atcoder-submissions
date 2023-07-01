// https://atcoder.jp/contests/abc021/submissions/31395265

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
  int a;
  vector<int> via;
  set<int> s;
  rep(i, 2) {
    cin >> a;
    via.push_back(a);
    s.insert(a);
  }
  cin >> a;
    while(cin >> a) {
    via.push_back(a);
    s.insert(a);
    }
  cout << (s.size() == via.size() ? "YES\n" : "NO\n");
}
