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

  vector<string> s(n);
  fore(z, s) cin >> z;

  int cnt[10][10];
  int base[10][10];
  rep(i, 0, 10) rep(j, 0, 10) cnt[i][j] = 0;

  rep(h, 0, n) {
    rep(i, 0, 10) {
      int num = s[h][i] - 48;
      cnt[num][i]++;
      base[num][i]++;
    }
  }

  int ans = 1e9;
  rep(i, 0, 10) {
    reps(j, 0, 9) {

      rep(k, j, 10000009) {
        cnt[i][k % 10]--;

        if(cnt[i][0] <= 0 && cnt[i][1] <= 0 && cnt[i][2] <= 0 && cnt[i][3] <= 0 && cnt[i][4] <= 0 && cnt[i][5] <= 0 && cnt[i][6] <= 0 && cnt[i][7] <= 0 && cnt[i][8] <= 0 && cnt[i][9] <= 0) {
          if(ans > k - j) {
            ans = k - j;
          }
          break;
        }
      }

      rep(b, 0, 10) cnt[i][b] = base[i][b];
    }
  }

  cout << ans;
}