#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a;
  cin >> n >> a;

  deque<int> t(n);
  for(auto &z : t) cin >> z;

  int time = -1;
  int wait = 0;
  while(t.size() >= 1 || wait >= 1) {
    time++;
    if(wait >= 1) {
      wait--;
      if(wait == 0) cout << time << endl;
    }
    if(t.size() == 0) continue;

    if(t.front() <= time && wait == 0) {
      t.pop_front();
      wait = a;
    }
    // cout << time << " " << wait << endl;
  }
}