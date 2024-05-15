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
#define y0 y20210831 // Hello, World
#define y1 y20220320 // Brown
using namespace std;

bool compare_by_b(pair<int, int> a, pair<int, int> b) {
  if(a.second != b.second) {
    return a.second < b.second;
  } else {
    return a.first < b.first;
  }
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;
  map<int, vector<int>> a;

  int z;
  rep(i, n) {
    cin >> z;
    a[z].push_back(i);
  }

  int q;
  cin >> q;
  int l, r, x;
  while(cin >> l >> r >> x) {
    l--;
    r--;

    auto left = lower_bound(all(a[x]), l);
    auto right = upper_bound(all(a[x]), r);
    cout << right - left << "\n";
  }
}