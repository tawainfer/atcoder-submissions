#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  const int INF = 1e9;
  int min_age = INF;
  int start_idx;

  vector<string> s(n);
  int a;
  for(int i = 0; i < n; i++) {
    cin >> s[i] >> a;
    if(min_age > a) {
      start_idx = i;
      min_age = a;
    }
  }

  for(int i = start_idx; i < start_idx + n; i++) {
    int idx = i % n;
    cout << s[idx] << endl;
  }
}