// https://atcoder.jp/contests/agc035/submissions/41910197

#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  vector<long long> a(n);
  map<long long, long long> cnt;
  set<long long> se;
  for(long long &z : a) {
    cin >> z;
    cnt[z]++;
    se.insert(z);
  }

  if(se.size() == 1 && *se.begin() == 0) {
    cout << "Yes";
    return 0;
  }

  if(n % 3 != 0) {
    cout << "No";
    return 0;
  }

  vector<long long> t;
  for(long long x : se) t.push_back(x);

  if(se.size() == 3) {
    if((t[0] ^ t[1] ^ t[2]) != 0) {
      // cout << (t[0] ^ t[1] ^ t[2]);
      cout << "No";
      return 0;
    } else if(cnt[t[0]] == cnt[t[1]] && cnt[t[1]] == cnt[t[2]]) {
      cout << "Yes";
      return 0;
    } else {
      cout << "No";
      return 0;
    }
  }

  if(se.size() == 2) {
    if(t[0] == 0 && cnt[t[0]] * 2 == cnt[t[1]]) {
      cout << "Yes";
      return 0;
    } else {
      cout << "No";
      return 0;
    }
  }

  cout << "No";
}
