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

int n;
int cnt = 0;
vector<int> a;
vector<bool> seen(100009, false);
bool ans = false;

void dfs(int x) {
  //cout << cnt << " " << x << endl;
  seen[x] = true;
  if(seen[2]) {
    ans = true;
    return;
  }
  if(!(seen[a[x]])) {
    cnt++;
    dfs(a[x]);
  }
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  cin >> n;
  a.resize(n + 1);
  reps(i, 1, n) cin >> a[i]; 
  //fore(z, a) cout << z << " ";

  cnt++;
  dfs(1);
  
  cnt--;
  cout << (ans ? cnt : -1);
}