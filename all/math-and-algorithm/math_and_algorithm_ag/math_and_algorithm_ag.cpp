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
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int x1, y1, r1, x2, y2, r2;
  cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

  if(r1 < r2) {
    swap(x1, x2);
    swap(y1, y2);
    swap(r1, r2);
  }

  double d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
  
  int pattern;
  if(r1 + r2 == d) pattern = 4;
  else if(r1 - r2 < d && d < r1 + r2) pattern = 3;
  else if(r1 + r2 < d) pattern = 5;
  else if(r1 - r2 == d) pattern = 2;
  else pattern = 1;

  cout << pattern;
}