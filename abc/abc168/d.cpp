// https://atcoder.jp/contests/abc168/submissions/34355613

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

  queue<int> q;
  vector<int> root(200009);
  vector<bool> seen(200009);
  q.push(1);

  while(!q.empty()) {
    int f = q.front();
    fore(z, g[f]) {
      if(!seen[z]) {
        q.push(z);
        seen[z] = true;
        root[z] = f;
      }
    }
    q.pop();
  }

  cout << "Yes\n";
  reps(i, 2, n) cout << root[i] << "\n";
  return 0;
}
