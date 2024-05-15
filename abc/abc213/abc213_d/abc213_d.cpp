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

vector<int> ans;
vector<int> seen(200009, -1);
vector<int> g[200009];

void dfs(int i) {
  fore(z, g[i]) {
    if(seen[z] == -1) {
      seen[z] = i;
      ans.push_back(z);
      dfs(z);
      ans.push_back(i);
    }
  }
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  int a, b;
  while(cin >> a >> b) {
    g[a].push_back(b);
    g[b].push_back(a);
  }
  rep(i, 0, 200009) sort(all(g[i]));

  ans.push_back(1);
  seen[1] = 0;
  dfs(1);

  int si = ans.size();
  rep(i, 0, si) cout << ans[i] << (i == si - 1 ? "\n" : " ");
  return 0;
}