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
#define y0 y20210831 // Hello, World
#define y1 y20220320 // Brown
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int t, n;
  cin >> t >> n;
  int a[500009] = {0};

  int l, r;
  while(cin >> l >> r) {
    a[l]++;
    a[r]--;
  }

  rep(i, t) {
    if(i == 0) cout << a[0];
    else {
      a[i] += a[i - 1];
      cout << a[i];
    }
    cout << "\n";
  }
}