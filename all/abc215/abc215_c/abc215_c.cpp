#include <bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  
  string s;
  int k;
  cin >> s >> k;
  k--;
  sort(s.begin(),s.end());
  while(k--) next_permutation(s.begin(),s.end());
  cout << s;
}