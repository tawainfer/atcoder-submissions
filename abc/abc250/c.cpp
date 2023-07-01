// https://atcoder.jp/contests/abc250/submissions/31550893

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

  int n, q;
  cin >> n >> q;
  vector<int> pos(200009);
  map<int, pair<int, int>> m;
  m[0] = make_pair(0, 0);
  reps(i, 1, n) {
    pos[i] = i;
    m[i] = make_pair(i - 1, i + 1);
  }

  int x;
  while(cin >> x) {
    if(pos[x] + 1 > n) x = m[x].first;

    int left = x;
    int right = m[x].second;

    int leftf = m[left].first;
    int rights = m[right].second;

    m[left].second = rights;
    m[right].first = leftf;
    
    m[left].first = right;
    m[right].second = left;
    
    m[m[left].second].first = left;
    m[m[right].first].second = right;

    swap(pos[left], pos[right]);
  }

  vector<int> ans(200009);
  reps(i, 1, n) {
    ans[pos[i]] = i;
  }

  reps(i, 1, n) {
    cout << ans[i] << " ";
  }
  cout << "\n";
}
