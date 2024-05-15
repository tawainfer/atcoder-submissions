#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  vector<int> cs(123, 0), ct(123, 0);
  int atcs = 0;
  int atct = 0;
  vector<char> ptn = {'a', 't', 'c', 'o', 'd', 'e', 'r'};

  for(auto c : s) {
    cs[(int)c]++;
    if(c == '@') atcs++;
  }
  for(auto c : t) {
    ct[(int)c]++;
    if(c == '@') atct++;
  }

  // for(int c = 97; c < 123; c++) cout << cs[c] << " ";
  // cout << endl;
  // for(int c = 97; c < 123; c++) cout << ct[c] << " ";
  // cout << endl;
  // cout << atcs << " " << atct;

  int d = 0;
  int cl = 0;
  int cr = 0;

  for(int i = 97; i < 123; i++) {
    bool check_ptn = false;
    for(auto p : ptn) if(p == (char)i) check_ptn = true;

    if(check_ptn) {
      if(cs[i] > ct[i]) cr += cs[i] - ct[i];
      else if(cs[i] < ct[i]) cl += ct[i] - cs[i];
    } else {
      if(cs[i] != ct[i]) {
        cout << "No";
        return 0;
      }
    }
  }
// cout << " " << d << endl;
  if(atcs >= cl && atct >= cr && (atcs - cl) == (atct - cr)) {
    cout << "Yes";
  } else {
    cout << "No";
  }
}