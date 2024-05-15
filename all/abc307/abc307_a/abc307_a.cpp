#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> cnt_day(7 * n);
  for(int &z : cnt_day) cin >> z;

  vector<int> cnt_week(n, 0);
  for(int i = 0; i < cnt_day.size(); i++) cnt_week[i / 7] += cnt_day[i];
  
  for(int x : cnt_week) cout << x << " ";
  return 0;
}