#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  deque<int> l, r;
  set<pair<int, int>> se;

  for(int i = 0; i < n; i++) {
    if(s[i] == '(') l.push_back(i);
    if(s[i] == ')') {
      r.push_back(i);

      if(!l.empty()) {
        se.insert(make_pair(l.back(), r.back()));
        l.pop_back();
        r.pop_back();
      }
    }
  }

  vector<int> cnt(n + 1, 0);
  for(auto p : se) {
    int x = p.first;
    int y = p.second;
    cnt[x]++;
    cnt[y + 1]--;
  }

  for(int i = 1; i < cnt.size(); i++) cnt[i] += cnt[i - 1];
  for(int i = 0; i < n; i++) if(cnt[i] == 0) cout << s[i];
}