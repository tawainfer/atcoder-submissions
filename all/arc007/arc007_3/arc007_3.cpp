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

  vector<char> ptn;
  char c;
  while(cin >> c) ptn.push_back(c);
  int n = ptn.size();

  int ans = 11;
  rep(bit, 1, (1 << 10)) {
    int cnt = 0;
    int last;
    vector<bool> light(20, false);

    rep(i, 0, 10) if(bit & (1 << i)) {
      cnt++;
      last = i;

      int index = 0;
      rep(j, i, i + n) {
        if(ptn[index] == 'o') {
          light[j] = true;
          if(j + n < 20) light[j + n] = true;
        }
        index++;
      }
    }

    rep(i, last, last + n) {
      if(!light[i]) break;
      if(i == (last + n - 1)) ans = min(ans, cnt);
    }
  }

  cout << ans << "\n";
  return 0;
}