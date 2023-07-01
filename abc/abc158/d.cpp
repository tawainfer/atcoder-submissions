// https://atcoder.jp/contests/abc158/submissions/32696248

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

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s;
  int q;
  cin >> s >> q;

  deque<char> d;
  fore(z, s) d.push_back(z);

  bool rev = false;
  while(cin >> q) {
    if(q == 1) rev ^= 1;
    else {
      int f;
      char c;
      cin >> f >> c;
      f--;

      if(rev) f ^= 1;
      if(f == 0) d.push_front(c);
      else d.push_back(c);
    }
  }

  if(rev) reverse(all(d));
  fore(z, d) cout << z;
  return 0;
}
