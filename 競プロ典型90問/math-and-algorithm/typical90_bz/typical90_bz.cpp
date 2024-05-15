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
#define y0 y20210904 // Gray
#define y1 y20220319 // Brown
using namespace std;

int n, m;
ll ans = 0;
vector<int> a, b;
vector<int> rel[100009];
vector<bool> judge(100009, false);

void dfs(int pos) {
  judge[pos] = true;

  int cnt = 0;
  fore(z, rel[pos]) {
    if(judge[z] == false) dfs(z);

    if(pos > z) cnt++;
  }

  if(cnt == 1) {
    ans++;
  }
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  cin >> n >> m;
  int A, B;
  while(cin >> A >> B) {
    rel[A].push_back(B);
    rel[B].push_back(A);
  }

  dfs(1);

  cout << ans;
}