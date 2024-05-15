#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  deque<int> d(n);
  set<int> s;

  for(auto &z : d) {
    cin >> z;
    if(s.find(z) != s.end()) z = 2e9;
    else s.insert(z);
  }
  sort(d.begin(), d.end());

  int target = 1;
  while(!d.empty()) {
    if(d.front() == target) {
      target++;
      d.pop_front();
    } else {
      if(d.size() >= 2) {
        d.pop_back();
        d.pop_back();
        target++;
      } else break;
    }
  }

  cout << target - 1;
  return 0;
}