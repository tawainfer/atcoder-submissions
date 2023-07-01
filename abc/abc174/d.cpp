// https://atcoder.jp/contests/abc174/submissions/34506520

#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto &i : a)
#define ll long long
#define nextp next_permutation
#define rep(i, a, b) for(int i = a; i < b; i++)
#define reps(i, a, b) for(int i = a; i <= b; i++)
#define rrep(i, a, b) for(int i = a; i > b; i--)
#define rreps(i, a, b) for(int i = a; i >= b; i--)
#define repv(i, a, b, c) for(int i = a; i < b; i += c)
#define repsv(i, a, b, c) for(int i = a; i <= b; i += c)
#define rrepv(i, a, b, c) for(int i = a; i > b; i -= c)
#define rrepsv(i, a, b, c) for(int i = a; i >= b; i -= c)
#define ull unsigned ll
template<class T> bool chmin(T &a, T &b) { return a > b ? (a = b, 1) : 0; }
template<class T> bool chmax(T &a, T &b) { return a < b ? (a = b, 1) : 0; }
template<class T> void lower(T &a) { a = numeric_limits<T>::min(); }
template<class T> void upper(T &a) { a = numeric_limits<T>::max(); }

/*

  @tawainfer

  2021-09-04 Gray
  2022-03-19 Brown
  2022-08-27 Green

  ξ(･_･)ξ I'll do my best! ξ(･_･)ξ

*/

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n;
  cin >> n;

  priority_queue<int> r;
  priority_queue<int, vector<int>, greater<int>> w;

  char c;
  rep(i, 0, n) {
    cin >> c;
    (c == 'R' ? r.push(i) : w.push(i));
  }

  if(r.empty() || w.empty()) {
    cout << 0;
    return 0;
  }

  int ans = 0;
  while(1) {
    if(r.top() < w.top()) break;
    ans++;

    r.push(w.top());
    w.push(r.top());
    r.pop();
    w.pop();
  }

  cout << ans;
  return 0;
}
