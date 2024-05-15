#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  vector<ll> pow2 = {1};
  while(pow2.size() < 44) {
    pow2.push_back(pow2.back() * 2);
  }

  map<ll, string> ma;
  vector<ll> plus;
  for(ll bit = 0; bit < (1 << 22); bit++) {
    ll sum = 0;
    string s = "";

    for(int i = 0; i < 22; i++) {
      if(bit & (1 << i)) {
        s += "1";
        sum += pow2[i * 2];
      } else {
        s += "0";
      }
    }

    plus.push_back(sum);
    ma[sum] = s;
  }

  for(ll bit = 0; bit < (1 << 22); bit++) {
    ll sum = 0;
    string s = "";

    for(int i = 0; i < 22; i++) {
      if(bit & (1 << i)) {
        s += "1";
        sum += -pow2[i * 2 + 1];
      } else {
        s += "0";
      }
    }

    auto iter = lower_bound(plus.begin(), plus.end(), n - sum);
    if(iter == plus.end()) continue;

    ll sum2 = (*iter);
    if(sum + sum2 == n) {
      string t = ma[sum2];
      string ans = "";

      for(int i = s.size() - 1; i >= 0; i--) {
        ans += s[i];
        ans += t[i];
      }

      for(int i = 0; i < ans.size(); i++) {
        if(ans[i] != '0') break;
        ans[i] = '!';
      }
      
      if(ans.back() == '!') {
        ans.back() = '0';
      }

      for(int i = 0; i < ans.size(); i++) {
        if(ans[i] != '!') {
          cout << ans[i];
        }
      }
      return 0;
    }
  }
}