#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, k, q, a; cin >> n >> k >> q;
  vector<int> ppl(n, k);
  while(cin >> a) ppl[a-1]++;
  for(auto z : ppl) cout << (z - q > 0 ? "Yes\n" : "No\n");
}