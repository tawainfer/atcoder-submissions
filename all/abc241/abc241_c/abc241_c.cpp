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

  int n;
  cin >> n;
  char s[n][n];
  vector<int> retu(n, 0);
  int cnt = 0;

  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++) {
      if(j == 0) cnt = 0;
      cin >> s[i][j];
      if(s[i][j] == '#') {
        cnt++;
        retu[j]++;
      }
      if(j - 6 >= 0)
        if(s[i][j - 6] == '#') cnt--;
      if(cnt >= 4) {
        cout << "Yes";
        return 0;
      }
    }

  for(int i = 0; i < n; i++) {
    if(retu[i] < 4) continue;

    for(int j = 0; j < n; j++) {
      if(j == 0) cnt = 0;
      if(s[j][i] == '#') cnt++;
      if(j - 6 >= 0)
        if(s[j - 6][i] == '#') cnt--;
      if(cnt >= 4) {
        cout << "Yes";
        return 0;
      }
    }
  }

  for(int i = 0; i < (n - 5); i++) {
    for(int j = 0; j < (n - 5); j++) {
      cnt = 0;
      if(s[i][j] == '#') cnt++;
      if(s[i + 1][j + 1] == '#') cnt++;
      if(s[i + 2][j + 2] == '#') cnt++;
      if(s[i + 3][j + 3] == '#') cnt++;
      if(s[i + 4][j + 4] == '#') cnt++;
      if(s[i + 5][j + 5] == '#') cnt++;
      if(cnt >= 4) {
        cout << "Yes";
        return 0;
      }

      cnt = 0;
      if(s[i][j + 5] == '#') cnt++;
      if(s[i + 1][j + 4] == '#') cnt++;
      if(s[i + 2][j + 3] == '#') cnt++;
      if(s[i + 3][j + 2] == '#') cnt++;
      if(s[i + 4][j + 1] == '#') cnt++;
      if(s[i + 5][j] == '#') cnt++;
      if(cnt >= 4) {
        cout << "Yes";
        return 0;
      }
    }
  }
  cout << "No";
}