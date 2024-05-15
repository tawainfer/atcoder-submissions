#include <bits/stdc++.h>
using namespace std;

int ans = 0;
bool over = false;
vector<char> ptn = {'3', '5', '7'};

bool check(string &s) {
  vector<bool> b(3, false);
  for(auto c : s) b[((int)c - 51) / 2] = true;

  if(b[0] && b[1] && b[2]) return true;
  return false;
}

void dfs(int n, string &s, string t) {
  if(over) return;
  if((int)t.size() == n) {
    if(!check(t)) return;
    int a = stoi(s);
    int b = stoi(t);

    if(b <= a) ans++;
    else over = true;
    return;
  }

  for(auto c : ptn) {
    t += c;
    dfs(n, s, t);
    t.erase((int)t.size() - 1);
  }
}

int main() {
  int n;
  cin >> n;

  string s;
  s = to_string(n);

  for(int i = 3; i <= 9; i++) dfs(i, s, "");
  cout << ans;
  return 0;
}