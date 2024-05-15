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

  vector<int> a(5);
  set<int> ans;
  fore(z, a) cin >> z;
  
  rep(i, 5) for(int j = i + 1; j < 5; j++) for(int k = j + 1; k < 5; k++) {
    ans.insert(a[i] + a[j] + a[k]);
  }

  auto itr = ans.end();
  rep(i, 3) itr--;
  cout << *itr << "\n";
}