#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, a, b;
  cin >> n >> a >> b;

  deque<char> d;
  char c;
  for(int i = 0; i < n; i++) {
    cin >> c;
    d.push_back(c);
  }
  ll ans = 2e18;

  for(int i = 0; i < n; i++) {
    int cnt = 0;
    for(int j = 0; j < d.size() / 2; j++) {
      if(d[j] != d[n - 1 - j]) {
        cnt++;
        // cout << d[j] << " " << d[n - 1 - j] << endl;
      }
    }

    ans = min(ans, a * i + b * cnt);
    // for(auto &z : d) cout << z << " ";
    // cout << endl;
    // cout << i << " " << cnt << " " << " " << ans << endl;

    d.push_back(d.front());
    d.pop_front();
  }

  cout << ans;
  return 0;
}