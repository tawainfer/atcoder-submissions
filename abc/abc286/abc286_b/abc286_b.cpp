#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  deque<char> d;
  char c;
  while(cin >> c) d.push_back(c);

  while(!d.empty()) {
    if(d.size() >= 2 && d[0] == 'n' && d[1] == 'a') {
      cout << "nya";
      d.pop_front();
      d.pop_front();
    } else {
      cout << d.front();
      d.pop_front();
    }
  }
}