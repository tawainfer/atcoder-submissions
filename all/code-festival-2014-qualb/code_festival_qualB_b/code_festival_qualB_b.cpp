#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int a, n, k, sum = 0; cin >> n >> k;
  for(int i = 1; i <= n; i++) {
    cin >> a;
    sum += a;
    if(sum >= k) {
      cout << i << "\n";
      return 0;
    }
  }
}