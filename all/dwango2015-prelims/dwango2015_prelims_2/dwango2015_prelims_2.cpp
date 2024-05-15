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

  string s;
  cin >> s;
  s += "!!";

  queue<int> ni_go;
  int cnt = 0;
  rep(i, 0, (int)s.size() - 1) {
    if(s[i] == '2') {
      if(s[i + 1] == '5') {
        cnt++;
        i++;
      } else {
        if(cnt > 0) {
          ni_go.push(cnt);
          cnt = 0;
        }
      }
    } else {
      if(cnt > 0) {
        ni_go.push(cnt);
        cnt = 0;
      }
    }
  }

  vector<int> kaisa(50001);
  kaisa[0] = 0;
  reps(i, 1, 50000) kaisa[i] = kaisa[i - 1] + i;

  ll ans = 0;
  while(!ni_go.empty()) {
    ans += kaisa[ni_go.front()];
    ni_go.pop();
  }

  cout << ans << "\n";
  return 0;
}