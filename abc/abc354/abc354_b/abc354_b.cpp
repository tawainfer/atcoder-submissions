#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int sum = 0;
  vector<pair<string, int>> v;
  for(int i = 0; i < n; i++) {
    string s;
    int c;
    cin >> s >> c;
    sum += c;
    v.push_back(make_pair(s, c));
  }
  sort(v.begin(), v.end());

  cout << v[sum % n].first << endl;
}