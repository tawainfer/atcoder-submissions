#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, m; cin >> n >> m;
  vector<int> l(m), r(m);
  for(int i = 0; i < m; i++) cin >> l[i] >> r[i];
  sort(all(l));
  sort(all(r));
  cout << (r[0] - l[m-1] >= 0 ? r[0] - l[m-1] + 1 : 0);
}