// https://atcoder.jp/contests/abc084/submissions/39547798

#include <bits/stdc++.h>
using namespace std;

bool is_prime(int &x) {
  for(int i = 2; i * i <= x; i++) if(x % i == 0) return false;
  return true;
}

int main() {
  int q;
  cin >> q;

  bool prime[200009];
  for(int i = 2; i < 200009; i++) if(is_prime(i)) prime[i] = true;

  bool sim[200009];
  for(int i = 2; i < 200009; i++) if(prime[i] && prime[(i + 1) / 2]) sim[i] = true;

  vector<int> cnt_sum(200009, 0);
  for(int i = 2; i < 200009; i++) cnt_sum[i] = cnt_sum[i - 1] + (sim[i] ? 1 : 0);

  int l, r;
  while(cin >> l >> r) cout << cnt_sum[r] - cnt_sum[l - 1] << "\n";
  return 0;
}
