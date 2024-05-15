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

  vector<pair<int, int>> odd(100009), even(100009); // cnt, index
  rep(i, 0, 100009) odd[i] = make_pair(0, i);
  rep(i, 0, 100009) even[i] = make_pair(0, i);

  vector<int> p(n);
  rep(i, 0, n) {
    cin >> p[i];
    if(i % 2 == 1) odd[p[i]].first++;
    else even[p[i]].first++;
  }

  sort(all(odd));
  reverse(all(odd));
  sort(all(even));
  reverse(all(even));

  int x;
  lower(x);

  rep(i, 0, 5) rep(j, 0, 5) {
    if(odd[i].second == even[j].second) continue;
    int y = odd[i].first + even[j].first;
    chmax(x, y);
  }

  cout << n - x << "\n";
  return 0;
}