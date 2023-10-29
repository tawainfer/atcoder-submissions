// https://atcoder.jp/contests/abc326/submissions/47056751

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, x, y;
  cin >> n >> x >> y;

  string ptn_y = "";
  string ptn_x = "";

  vector<ll> a(n);
  vector<ll> py;
  vector<ll> px;

  ll sy = 0;
  ll sx = 0;
  for(int i = 0; i < n; i++) {
    ll t;
    cin >> t;

    if(i % 2 == 0) {
      py.push_back(t);
      sy -= t;
    } else {
      px.push_back(t);
      sx -= t;
    }
  }

  ll gy = y - sy;
  ll gx = x - sx;

  vector<ll> py1, py2;
  for(int i = 0; i < py.size(); i++) {
    if(i < py.size() / 2) {
      py1.push_back(py[i] * 2);
    } else {
      py2.push_back(py[i] * 2);
    }
  }

  vector<pair<ll, ll>> spy1;
  for(ll bit = 0; bit < (1 << py1.size()); bit++) {
    ll sum = 0;
    for(int i = 0; i < py1.size(); i++) {
      if(bit & (1 << i)) {
        sum += py1[i];
      }
    }

    spy1.push_back(make_pair(sum, bit));
  }

  vector<pair<ll, ll>> spy2;
  for(ll bit = 0; bit < (1 << py2.size()); bit++) {
    ll sum = 0;
    for(int i = 0; i < py2.size(); i++) {
      if(bit & (1 << i)) {
        sum += py2[i];
      }
    }

    spy2.push_back(make_pair(sum, bit));
  }
  sort(spy2.begin(), spy2.end());

  bool check = false;
  for(auto p : spy1) {
    pair<ll, ll> target = make_pair(gy - p.first, -1);
    auto iter = lower_bound(spy2.begin(), spy2.end(), target);
    if(iter == spy2.end()) continue;
    if((*iter).first == target.first) {
      check = true;

      for(int i = 0; i < py1.size(); i++) {
        if(p.second & (1 << i)) {
          ptn_y += "1";
        } else {
          ptn_y += "0";
        }
      }

      for(int i = 0; i < py2.size(); i++) {
        if((*iter).second & (1 << i)) {
          ptn_y += "1";
        } else {
          ptn_y += "0";
        }
      }
      break;
    }
  }

  if(!check) {
    cout << "No";
    return 0;
  }

  vector<ll> px1, px2;
  for(int i = 0; i < px.size(); i++) {
    if(i < px.size() / 2) {
      px1.push_back(px[i] * 2);
    } else {
      px2.push_back(px[i] * 2);
    }
  }

  vector<pair<ll, ll>> spx1;
  for(ll bit = 0; bit < (1 << px1.size()); bit++) {
    ll sum = 0;
    for(int i = 0; i < px1.size(); i++) {
      if(bit & (1 << i)) {
        sum += px1[i];
      }
    }

    spx1.push_back(make_pair(sum, bit));
  }

  vector<pair<ll, ll>> spx2;
  for(ll bit = 0; bit < (1 << px2.size()); bit++) {
    ll sum = 0;
    for(int i = 0; i < px2.size(); i++) {
      if(bit & (1 << i)) {
        sum += px2[i];
      }
    }

    spx2.push_back(make_pair(sum, bit));
  }
  sort(spx2.begin(), spx2.end());

  check = false;
  for(auto p : spx1) {
    pair<ll, ll> target = make_pair(gx - p.first, -1);
    auto iter = lower_bound(spx2.begin(), spx2.end(), target);
    if(iter == spx2.end()) continue;
    if((*iter).first == target.first) {
      check = true;

      for(int i = 0; i < px1.size(); i++) {
        if(p.second & (1 << i)) {
          ptn_x += "1";
        } else {
          ptn_x += "0";
        }
      }

      for(int i = 0; i < px2.size(); i++) {
        if((*iter).second & (1 << i)) {
          ptn_x += "1";
        } else {
          ptn_x += "0";
        }
      }
      break;
    }
  }

  if(!check) {
    cout << "No";
    return 0;
  }

  string ptn = "";
  for(int i = 0; i < ptn_y.size(); i++) {
    ptn += ptn_y[i];
    if(i < ptn_x.size()) ptn += ptn_x[i];
  }

  cout << "Yes" << endl;

  char d = 'R';
  for(int i = 0; i < ptn.size(); i++) {
    if(i % 2 == 0) {
      if(d == 'R') {
        if(ptn[i] == '1') {
          cout << "L";
          d = 'U';
        } else {
          cout << "R";
          d = 'D';
        }
      } else {
        if(ptn[i] == '1') {
          cout << "R";
          d = 'U';
        } else {
          cout << "L";
          d = 'D';
        }
      }
    } else {
      if(d == 'U') {
        if(ptn[i] == '1') {
          cout << "R";
          d = 'R';
        } else {
          cout << "L";
          d = 'L';
        }
      } else {
        if(ptn[i] == '1') {
          cout << "L";
          d = 'R';
        } else {
          cout << "R";
          d = 'L';
        }
      }
    }
  }
}
