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

  int n;
  cin >> n;

  int cnt[200001] = {0};
  deque<int> d;

  int ma = 0;
  while(cin >> n) {
    cnt[n]++;
    d.push_back(n);
    ma = max(ma, n);
  }
  
  int last = 0;
  fore(z, d) {
    if(last > z) {
      ma = last;
      break;
    }
    last = z;
  }

  while(!d.empty()) {
    if(d.front() != ma) cout << d.front() << " ";
    d.pop_front();
  }
}