// https://atcoder.jp/contests/arc142/submissions/32685302

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
  int nn = n * n;

  deque<int> ans[n];
  deque<int> num[n];

  int cnt = 0;
  rep(i, 0, n) {
    rep(j, 0, n) {
      cnt++;
      num[i].push_back(cnt);
    }
  }

  rep(i, 0, n) {
    rep(j, 0, n) {
      if(j == 0) {
        ans[i].push_back(num[i].front());
        num[i].pop_front();
      } else {
        if(j % 4 == 1) {
          ans[i].push_front(num[i].back());
          num[i].pop_back();
        }
        if(j % 4 == 2) {
          ans[i].push_back(num[i].back());
          num[i].pop_back();
        }
        if(j % 4 == 3) {
          ans[i].push_front(num[i].front());
          num[i].pop_front();
        }
        if(j % 4 == 0) {
          ans[i].push_back(num[i].front());
          num[i].pop_front();
        }
      }
    }
  }

  rep(i, 0, n) {
    rep(j, 0, n) {
      cout << ans[i][j];
      if(j == n - 1) cout << "\n";
      else cout << " ";
    }
  }

  return 0;
}
