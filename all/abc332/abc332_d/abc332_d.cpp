#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 2e18;

ll countSwapsToSort(std::vector<ll> permutation) {
    std::vector<ll> sorted_permutation = permutation;
    std::sort(sorted_permutation.begin(), sorted_permutation.end());

    ll swap_count = 0;
    for (int i = 0; i < permutation.size(); ++i) {
        for (int j = i + 1; j < permutation.size(); ++j) {
            if (permutation[i] > permutation[j]) {
                // swap(permutation[i], permutation[j]);
                ll t = permutation[i];
                permutation[i] = permutation[j];
                permutation[j] = t;
                ++swap_count;
            }
        }
    }

    return swap_count;
}

int main() {
  ll h, w;
  cin >> h >> w;

  vector<vector<ll>> a(h, vector<ll>(w));
  vector<vector<ll>> b(h, vector<ll>(w));
  for(ll i = 0; i < h; i++) {
    for(ll j = 0; j < w; j++) {
      cin >> a[i][j];
    }
  }
  for(ll i = 0; i < h; i++) {
    for(ll j = 0; j < w; j++) {
      cin >> b[i][j];
    }
  }

  vector<ll> py, px;
  for(ll i = 0; i < h; i++) {
    py.push_back(i);
  }
  for(ll i = 0; i < w; i++) {
    px.push_back(i);
  }

  ll ans = INF;
  do {
    do {
      // for(auto x : py) cout << x << " ";
      // cout << endl;

      ll cnt = 0;
      // for(ll i = 0; i < py.size(); i++) {
      //   if(py[i] <= i) {
      //     cnt += (i - py[i]);
      //     // cout << cnt << endl;
      //   }
      // }
      // for(ll i = 0; i < px.size(); i++) {
      //   if(px[i] <= i) {
      //     cnt += i - (px[i]);
      //   }
      // }
      cnt += countSwapsToSort(py);
      cnt += countSwapsToSort(px);

      bool check = true;
      for(ll i = 0; i < py.size(); i++) {
        for(ll j = 0; j < px.size(); j++) {
          if(a[py[i]][px[j]] != b[i][j]) {
            check = false;
            break;
          }
        }
      }

      if(check) {
        // printf("cnt=%d\n", cnt);
        if(ans > cnt) {
          // for(auto x : py) cout << x << " ";
          // cout << endl;
          // for(auto x : px) cout << x << " ";
          // cout << endl;
        }

        ans = min(ans, cnt);
      }
    } while(next_permutation(px.begin(), px.end()));
  } while(next_permutation(py.begin(), py.end()));

  cout << (ans == INF ? -1 : ans);
}