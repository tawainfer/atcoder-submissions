#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void merge(ll l, ll r, deque<ll> &idx) {
  ll d = r - l + 1;
  if(d <= 1) return;

  ll l1 = l;
  ll r1 = l + d / 2 - 1;
  ll l2 = l + d / 2;
  ll r2 = r;
  merge(l1, r1, idx);
  merge(l2, r2, idx);
  
  queue<ll> tmp;
  while(!(r1 < l1 && r2 < l2)) {
    if(r1 < l1) {
      tmp.push(idx[l2]);
      l2++;
    } else if(r2 < l2) {
      tmp.push(idx[l1]);
      l1++;
    } else {
      cout << "? " << idx[l1] << " " << idx[l2] << endl;
      ll q;
      cin >> q;
      if(q == 1) {
        tmp.push(idx[l1]);
        l1++;
      } else if(q == 0) {
        tmp.push(idx[l2]);
        l2++;
      } else {
        throw runtime_error("大小関係の判定がおかしい");
      }
    }
  }

  while(!tmp.empty()) {
    idx[l] = tmp.front();
    tmp.pop();
    l++;
  }
}

void merge_sort(deque<ll> &idx) {
  merge(0, idx.size() - 1, idx);
}

ll binary_search(deque<ll> &idx, ll target) {
  ll ok = 0;
  ll ng = idx.size() - 1;

  while(ng - ok > 1) {
    ll m = (ok + ng) / 2;
    cout << "? " << idx[m] << " " << target << endl;
    ll q;
    cin >> q;

    if(q == 1) {
      ok = m;
    } else if(q == 0) {
      ng = m;
    } else {
      throw runtime_error("大小関係の判定がおかしい");
    }
  }

  return ng;
}

int main() {
  ll n;
  cin >> n;

  deque<ll> idx;
  for(int i = 1; i <= n; i++) {
    idx.push_back(i);
  }

  merge_sort(idx);

  ll next_idx;
  while(idx.size() >= 2) {
    // cout << "idx" << endl;
    // for(auto x : idx) cout << x << " ";
    // cout << endl;
    ll f = idx.front();
    ll b = idx.back();
    // idx.pop_front();
    // idx.pop_back();

    // for(int i = 0; i < idx.size(); i++) {
    //   if(max(f, b) < idx[i]) {
    //     idx[i] -= 2;
    //   } else if(min(f, b) < idx[i]) {
    //     idx[i]--;
    //   }
    // }

    cout << "+ " << f << " " << b << endl;
    ll q;
    cin >> q;
    if(q == -1) {
      throw runtime_error("足し算処理がおかしい");
    }
    next_idx = q;

    ll insert_idx = binary_search(idx, next_idx);
    auto iter = idx.begin();
    iter += insert_idx;
    idx.insert(iter, next_idx);

    idx.pop_front();
    idx.pop_back();
    next_idx++;
  }

  cout << "!" << endl;
}
