#include <bits/stdc++.h>
using namespace std;

bool check(vector<char> v) {
  for(int i = 0; i < v.size(); i++) {
    if(v[i] != v[v.size() - 1 - i]) {
      return false;
    }
  }
  return true;
}

int main() {
  int n, k;
  cin >> n >> k;

  string s;
  cin >> s;

  vector<char> v;
  for(auto c : s) {
    v.push_back(c);
  }
  sort(v.begin(), v.end());

  int ans = 0;
  do {
    bool flag = false;
    for(int i = 0; i <= n - k; i++) {
      vector<char> tmp;
      for(int j = i; j <= i + k - 1; j++) {
        tmp.push_back(v[j]);
      }
      if(check(tmp)) {
        flag = true;
        break;
      }
    }

    if(!flag) {
      ans++;
    }
  } while(next_permutation(v.begin(), v.end()));
  
  cout << ans;
}