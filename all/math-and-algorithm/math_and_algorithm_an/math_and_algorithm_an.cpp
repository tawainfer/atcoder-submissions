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

  int n, m;
  cin >> n >> m;

  vector<int> g[100009];
  int a, b;
  while(cin >> a >> b) {
    g[a].push_back(b);
    g[b].push_back(a);
  }

  vector<int> seen(200009, -1);
  seen[1] = 0;

  queue<int> q;
  q.push(1);
  while(!q.empty()) {
    int x = q.front();
    q.pop();

    fore(z, g[x]) {
      if(seen[z] == -1) {
        seen[z] = seen[x] + 1;
        q.push(z);
      }
    }
  }

  reps(i, 1, n) cout << seen[i] << endl;
  return 0;
}