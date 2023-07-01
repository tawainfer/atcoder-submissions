// https://atcoder.jp/contests/arc012/submissions/31471531

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

  string s;
  cin >> s;
  
  if(s == "Monday") cout << 5;
  else if(s == "Tuesday") cout << 4;
  else if(s == "Wednesday") cout << 3;
  else if(s == "Thursday") cout << 2;
  else if(s == "Friday") cout << 1;
  else cout << 0;
  cout << "\n";
}
