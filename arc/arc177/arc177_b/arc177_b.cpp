#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  string s;
  cin >> s;

  vector<char> ans;
  for(int i = n - 1; i >= 0; i--) {
    if(s[i] == '1') {
      for(int _ = 0; _ < i + 1; _++) ans.push_back('A');
      for(int _ = 0; _ < i; _++) ans.push_back('B');
    }
  }

  cout << ans.size() << endl;
  for(auto c : ans) {
    cout << c;
  }
}