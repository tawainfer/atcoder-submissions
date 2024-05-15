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

  int n;
  cin >> n;

  int free = 0;
  vector<bool> color(8, false);

  int a;
  while(cin >> a) {
    if(a < 400) color[0] = true;
    else if(a < 800) color[1] = true;
    else if(a < 1200) color[2] = true;
    else if(a < 1600) color[3] = true;
    else if(a < 2000) color[4] = true;
    else if(a < 2400) color[5] = true;
    else if(a < 2800) color[6] = true;
    else if(a < 3200) color[7] = true;
    else free++;
  }

  int ans = 0;
  rep(i, 0, 8) {
    if(color[i]) ans++;
  }

  if(ans == 0) cout << 1 << " " << free;
  else cout << ans << " " << ans + free;
  return 0;
}