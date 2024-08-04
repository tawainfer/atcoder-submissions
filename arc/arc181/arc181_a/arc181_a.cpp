#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  for(int _ = 0; _ < t; _++) {
    int n;
    cin >> n;

    vector<int> p(n), q;
    for(auto &z : p) cin >> z;
    for(auto x : p) q.push_back(x);
    sort(q.begin(), q.end());

    bool check = true;
    for(int i = 0; i < n; i++) {
      if(p[i] != q[i]) {
        check = false;
        break;
      }
    }

    if(check) {
      cout << 0 << endl;
      continue;
    }

    if(p.front() == n && p.back() == 1) {
      cout << 3 << endl;
      continue;
    }

    set<int> se;
    check = false;
    for(int i = 0; i < n; i++) {
      se.insert(p[i]);
      if(p[i] == i + 1 && *(se.rbegin()) <= p[i]) {
        check = true;
        break;
      }
    }

    if(check) {
      cout << 1 << endl;
    } else {
      cout << 2 << endl;
    }
  }
}