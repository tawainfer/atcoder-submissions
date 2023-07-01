// https://atcoder.jp/contests/abc177/submissions/34305633

#include <bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define uint unsigned int
#define ushort unsigned short
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto &i : a)
#define nextp(v) next_permutation(all(v))
#define rep(i, a, b) for(int i = a; i < b; i++)
#define reps(i, a, b) for(int i = a; i <= b; i++)
#define rrep(i, a, b) for(int i = a; i > b; i--)
#define rreps(i, a, b) for(int i = a; i >= b; i--)
#define repv(i, a, b, c) for(int i = a; i < b; i += c)
#define repsv(i, a, b, c) for(int i = a; i <= b; i += c)
#define rrepv(i, a, b, c) for(int i = a; i > b; i -= c)
#define rrepsv(i, a, b, c) for(int i = a; i >= b; i -= c)
template<class T> bool chmax(T &a, T &b) { return a < b ? (a = b, 1) : 0; }
template<class T> bool chmin(T &a, T &b) { return a > b ? (a = b, 1) : 0; }
using namespace std;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n, m;
  cin >> n >> m;

  vector<int> g[200009];
  int a, b;
  while(cin >> a >> b) {
    g[a].push_back(b);
    g[b].push_back(a);
  }

  int ans = 0;
  vector<bool> seen(200009, false);

  reps(i, 1, n) if(!seen[i]) {
    int cnt = 0;
    queue<int> q;
    q.push(i);

    while(!q.empty()) {
      int f = q.front();
      q.pop();
      seen[f] = true;
      cnt++;
      fore(z, g[f]) if(!seen[z]) {
        q.push(z);
        seen[z] = true;
      }
      //cout << i << " " << f << " " << cnt << endl;
    }

    chmax(ans, cnt);
  }

  cout << ans;
  return 0;
}
