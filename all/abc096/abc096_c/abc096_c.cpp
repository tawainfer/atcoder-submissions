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
#define y0 y20210904 // Gray
#define y1 y20220319 // Brown
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int h, w;
  cin >> h >> w;

  char c[53][80];
  char p[53][80];
  char q[53][80];
  char r[53][80];
  
  rep(i, 0, 53) rep(j, 0, 80) {
    c[i][j] = '.';
    p[i][j] = '.';
    q[i][j] = '.';
    r[i][j] = '.';
  }
  reps(i, 1, h) reps(j, 1, w) cin >> c[i][j];

  reps(i, 1, h + 1) {
    int cnt = 0;
    rep(j, 1, w + 1) {
      if(c[i][j] == '#') {
        cnt++;
        p[i][j] = '#';
      } else {
        if(cnt == 1) p[i][j - 1] = '.';
        cnt = 0;
      }
    }
  }

  reps(i, 1, w + 1) {
    int cnt = 0;
    reps(j, 1, h + 1) {
      if(c[j][i] == '#') {
        cnt++;
        q[j][i] = '#';
      } else {
        if(cnt == 1) q[j - 1][i] = '.';
        cnt = 0;
      }
    }
  }
  
  reps(i, 1, h + 1) {
    reps(j, 1, w + 1) {
      if(p[i][j] == '#' || q[i][j] == '#') {
        r[i][j] = '#';
      } 
    }
  }

  reps(i, 1, h) {
    reps(j, 1, w) {
      if(c[i][j] != r[i][j]) {
        cout << "No";
        return 0;
      }
    }
  }
  cout << "Yes";
}