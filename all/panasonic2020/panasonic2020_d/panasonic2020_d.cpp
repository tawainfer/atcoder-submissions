#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> ptn, vector<string> &ans, int &n) {
  if(ptn.size() == n) {
    ans.push_back("");
    for(int x : ptn) {
      ans.back() += (char)x + 'a';
    }
    return;
  }

  for(int i = 0; i <= *max_element(ptn.begin(), ptn.end()) + 1; i++) {
    ptn.push_back(i);
    dfs(ptn, ans, n);
    ptn.pop_back();
  }
}

int main() {
  int n;
  cin >> n;

  vector<int> ptn = {0};
  vector<string> ans;
  dfs(ptn, ans, n);

  for(auto s : ans) {
    cout << s << endl;
  }
}