#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  ll k, ans = 0;
  cin >> k;

  for(int a = 1; a <= k; a++) {
    for(int b = 1;; b++) {
      if(a * b > k) break;
      for(int c = 1;; c++) {
        if(a * b * c > k) break;
        ans++;
      }
    }
  }
  cout << ans;
}