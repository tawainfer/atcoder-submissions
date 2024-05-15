#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  set<int> se;
  int t;
  while(cin >> t) {
    se.insert(t);
  }

  if(se.size() == 1) {
    cout << "Yes";
  } else {
    cout << "No";
  }
}