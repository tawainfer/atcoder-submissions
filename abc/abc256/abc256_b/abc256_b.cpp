#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto& i : a)
#define ll long long
#define nextp(v) next_permutation(all(v))
#define rep(i, a, b) for(int i = a; i < b; i++)
#define reps(i, a, b) for(int i = a; i <= b; i++)
#define rrep(i, a, b) for(int i = a; i > b; i--)
#define rreps(i, a, b) for(int i = a; i >= b; i--)
#define repv(i, a, b, c) for(int i = a; i < b; i += c)
#define repsv(i, a, b, c) for(int i = a; i <= b; i += c)
#define rrepv(i, a, b, c) for(int i = a; i > b; i -= c)
#define rrepsv(i, a, b, c) for(int i = a; i >= b; i -= c)
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, a;
  cin >> n;
  vector<bool> base(4, false);
  base[0] = true;

  int ans = 0;
  while(cin >> a) {
    base[0] = true;

    if(base[3]) {
      base[3] = false;
      ans++;
    }
    if(base[2]) {
      base[2] = false;
      if(a >= 2) ans++;
      else base[3] = true;
    }
    if(base[1]) {
      base[1] = false;
      if(a >= 3) ans++;
      else if(a == 2) base[3] = true;
      else base[2] = true;
    }
    if(base[0]) {
      base[0] = false;
      if(a == 4) ans++;
      else if(a == 3) base[3] = true;
      else if(a == 2) base[2] = true;
      else base[1] = true;
    }
  }

  cout << ans;
  return 0;
}