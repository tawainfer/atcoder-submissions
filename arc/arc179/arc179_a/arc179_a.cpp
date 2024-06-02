#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> ruiseki(deque<ll> v) {
  vector<ll> res = {0};
  for(auto x : v) {
    res.push_back(res.back() + x);
  }
  return res;
}

int main() {
  ll n, k;
  cin >> n >> k;

  // vector<ll> a(n + 1);
  // for(int i = 1; i <= n; i++) cin >> a[i];

  deque<ll> d(n);
  for(auto &z : d) cin >> z;
  sort(d.begin(), d.end());

  

  bool check = false;
  if(k <= 0) check = true;
  ll sum = 0;

  vector<ll> ans;
  while(!d.empty()) {
    // sum += x;
    // if(sum >= k) check = true;
    // if(check && sum < k || !check && sum >= k) {
    //   cout << "No";
    //   return 0;
    // }
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