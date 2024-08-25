#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, k;
  cin >> n >> k;

  if(n % 2 == 0) {
    vector<int> v;
    for(int i = 1; i <= n; i++) {
      for(int j = 0; j < k; j++) {
        v.push_back(i);
      }
      if(i == n / 2) v.pop_back();
    }

    cout << n / 2 << " ";
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(auto x : v) cout << x << " ";
  } else {
    for(int i = 0; i < k; i++) cout << (n + 2 - 1) / 2 << " ";

    vector<int> v;
    for(int i = 1; i <= n; i++) {
      for(int j = 0; j < k; j++) {
        if(i != (n + 2 - 1) / 2) v.push_back(i);
      }
      if(i == (n + 2 - 1) / 2 - 1) v.pop_back();
    }

    if((n + 2 - 1) / 2 - 1 != 0) cout << (n + 2 - 1) / 2 - 1 << " ";
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(auto x : v) cout << x << " ";
  }

}