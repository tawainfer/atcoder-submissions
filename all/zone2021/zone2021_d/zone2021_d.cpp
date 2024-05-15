#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  deque<char> d;
  bool is_back = true;

  for(auto &z : s) {
    if(z == 'R') is_back = !is_back;
    else {
      if(is_back) d.push_back(z);
      else d.push_front(z);
    }

    if(d.size() > 1) {
      if(d[0] == d[1]) {
        d.pop_front();
        d.pop_front();
      } else if(d[d.size() - 1] == d[d.size() - 2]) {
        d.pop_back();
        d.pop_back();
      }
    }
  }

  int cnt = 1;
  if(!is_back) reverse(d.begin(), d.end());
  for(int i = d.size() - 2; i >= 0; i--) {
    if(d[i] == d[i + 1]) cnt++;
    else cnt = 1;

    if(cnt == 2) {
      cnt = 0;
      d[i] = '!';
      d[i + 1] = '!';
    }
  }

  for(auto &z : d) if(z != '!') cout << z;
  return 0;
}