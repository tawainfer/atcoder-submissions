#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, k;
  cin >> n >> k;

  deque<ll> d(n);
  for(auto &z : d) cin >> z;
  sort(d.begin(), d.end());

  bool check = false;
  if(k <= 0) check = true;
  ll sum = 0;

  vector<ll> ans;
  while(!d.empty()) {
    if(check) {
      if(sum + d.back() < k) {
        cout << "No";
        return 0;
      }

      ans.push_back(d.back());
      sum += d.back();
      d.pop_back();
    } else {
      ans.push_back(d.front());
      sum += d.front();
      d.pop_front();
    }
  }

  cout << "Yes" << endl;
  for(auto x : ans) cout << x << " ";
}
