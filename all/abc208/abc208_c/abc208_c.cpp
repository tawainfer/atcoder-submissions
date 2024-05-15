#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  long long n, k; cin >> n >> k;
  long long l = k / n, m = k % n; 
  vector<pair<int, int>> p(n);
  for(int i = 0; i < n; i++) {
    cin >> p[i].first;
    p[i].second = i;
  }
  sort(p.begin(), p.end());

  vector<long long> ppl(n, l);

  for(int i = 0; i < m; i++) ppl[p[i].second]++;

  for(auto z : ppl) cout << z << "\n";
}