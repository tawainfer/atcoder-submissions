#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  deque<int> a(n);
  for(auto &z : a) cin >> z;
  sort(a.begin(), a.end());

  vector<int> b(n);
  for(int i = 0; i < n; i += 2) {
    b[i] = a.front();
    a.pop_front();
  }

  for(int i = 1; i < n; i += 2) {
    b[i] = a.front();
    a.pop_front();

    if(!(b[i - 1] < b[i] && b[i] > b[i + 1])) {
      cout << "No";
      // cout << b[i - 1] << " " << b[i] << " " << b[i + 1] << endl;
      return 0;
    }
  }

  cout << "Yes";
}