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

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  char c;
  set<char> s;
  int n = 0;
  bool big = false;
  bool small = false;

  while(cin >> c) {
    n++;
    if(64 < c && c < 91) big = true;
    if(96 < c && c < 123) small = true;
    s.insert(c);
  }

  if(big && small && s.size() == n) cout << "Yes";
  else cout << "No";
}