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

  set<string> judge;
  set<int> allscore;
  map<string, int> score;
  map<string, int> index;

  int n;
  cin >> n;
  int top = -1;
  int max = -1;
  int ans = -1;

  string s;
  int t = 0;

  reps(i, 1, n) {
    cin >> s >> t;

    if(judge.count(s) == 0) {
      score[s] = t;
      index[s] = i;

      judge.insert(s);
      allscore.insert(t);

      if(top == -1) top = i;

      if(max < t) {
        max = t;
        ans = i;
      }
    }
  }
  cout << ans;
}