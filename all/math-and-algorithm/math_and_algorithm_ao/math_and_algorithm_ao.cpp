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
vector<int> a(200009, 0), b(200009, 0);
vector<int> rel[200009];
vector<int> judge(200009, -1);

void dfs(int& pos) {
  fore(z, rel[pos]) {
    if(judge[z] == -1) {
      judge[z] = 2 - judge[pos];
      dfs(z);
    }
  }
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  cin >> n >> m;
  reps(i, m) {
    cin >> a[i] >> b[i];
    rel[a[i]].push_back(b[i]);
    rel[b[i]].push_back(a[i]);
  }

  reps(i, n) {
    if(judge[i] == -1) {
      judge[i] == 0;
    }
    dfs(i);
  }
  
  reps(i, m) {
    if(judge[a[i]] == judge[b[i]]) {
      cout << "No";
      return 0;
    }
  }
  
  cout << "Yes";
}