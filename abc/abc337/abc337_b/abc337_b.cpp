#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  vector<char> t, u;
  for(auto c : s) {
    t.push_back(c);
    u.push_back(c);
  }
  sort(u.begin(), u.end());

  for(int i = 0; i < s.size(); i++) {
    if(t[i] != u[i]) {
      cout << "No";
      return 0;
    }
  }

  cout << "Yes";
}