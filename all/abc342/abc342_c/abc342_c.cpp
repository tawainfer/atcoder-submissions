#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  int q;
  cin >> q;

  vector<char> ptn;
  for(char c = 'a'; c <= 'z'; c++) {
    ptn.push_back(c);
  }

  for(int _ = 0; _ < q; _++) {
    char c, d;
    cin >> c >> d;
    
    for(auto &p : ptn) {
      if(p == c) {
        p = d;
      }
    }
  }

  for(char c : s) {
    cout << ptn[(int)(c - 'a')];
  }
}