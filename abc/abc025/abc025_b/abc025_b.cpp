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

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int c;
  for(ll i = 0; i < 10000000; i++) c++;

  int n, a, b;
  cin >> n >> a >> b;

  int d;
  string s;
  int pos = 0;
  while(cin >> s >> d) {
    if(d < a) d = a;
    if(d > b) d = b;
    if(s == "West") d = -d;

    pos += d;
  }

  if(pos > 0) cout << "East " << pos;
  else if(pos < 0) cout << "West " << -pos;
  else cout << pos;
  cout << "\n";
}