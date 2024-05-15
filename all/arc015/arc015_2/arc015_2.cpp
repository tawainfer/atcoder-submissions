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

  vector<int> a(6, 0);
  int n;
  cin >> n;
  double ma, mi;
  
  while(cin >> ma >> mi) {
    if(35 <= ma) a[0]++;
    if(30 <= ma && ma < 35) a[1]++;
    if(25 <= ma && ma < 30) a[2]++;
    if(25 <= mi) a[3]++;
    if(mi < 0 && 0 <= ma) a[4]++;
    if(ma < 0) a[5]++;
  }

  rep(i, 6) {
    cout << a[i];
    if(i != 5) cout << " ";
  }
  cout << "\n";
}