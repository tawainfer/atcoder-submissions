#include <bits/stdc++.h>
using namespace std;
int main() {
  string a, b; cin >> a >> b;
  if(a.size() > b.size()) {
    cout << "GREATER";
    return 0;
  } else if(a.size() < b.size()) {
    cout << "LESS";
    return 0;
  } else {
    for(int i = 0; i < a.size(); i++) {
      if(a[i] - '0' > b[i] - '0') {
        cout << "GREATER";
        return 0;
      } else if(a[i] - '0' < b[i] - '0') {
        cout << "LESS";
        return 0;
      }
    }
  }
  cout << "EQUAL";
}