#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, k;
  cin >> n >> k;

  string s;
  cin >> s;

  int sp;
  int t = 0;
  bool is_one = false;
  for(int i = 0; i < n; i++) {
    if(s[i] == '0') {
      is_one = false;
    } else {
      is_one = true;
      if(i == 0 || i > 0 && s[i - 1] == '0') {
        t++;
      }
    }

    if(k == t) {
      sp = i;
      break;
    }
  }

  int cnt1 = 0;
  for(int i = sp; i < n; i++) {
    if(s[i] == '0') break;
    cnt1++;
  }

  int cnt0 = 0;
  for(int i = sp - 1; i >= 0; i--) {
    if(s[i] == '1') break;
    cnt0++;
  }

  int rp = sp - cnt0;
  for(int i = 0; i < n; i++) {
    if(i >= rp && i < rp + cnt1) {
      cout << 1;
    } else if(i >= rp + cnt1 && i < rp + cnt1 + cnt0) {
      cout << 0;
    } else {
      cout << s[i];
    }
  }
}