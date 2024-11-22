#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  deque<char> d;
  for(auto c : s) {
    d.push_back(c);
  }

  if(n % 2 == 0) {
    cout << "No";
    return 0;
  }

  if(s[n / 2] != '/') {
    cout << "No";
    return 0;
  }

  while(d.size() >= 2) {
    if(!(d.front() == '1' && d.back() == '2')) {
      cout << "No";
      return 0;
    }

    d.pop_back();
    d.pop_front();
  }

  cout << "Yes";
}