// https://atcoder.jp/contests/abc337/submissions/49492632

#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w, k;
  cin >> h >> w >> k;

  vector<vector<char>> f(h, vector<char>(w));
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cin >> f[i][j];
    }
  }

  int ans = 1e9;

  for(int i = 0; i < h; i++) {
    int ok = 0;
    int ng = 0;
    int hoge = 0;

    deque<char> d;
    int r = 0;

    while(r < w) {
      if(ng >= 1) {
        if(d.front() == 'o') {
          ok--;
        } else if(d.front() == 'x') {
          ng--;
        } else {
          hoge--;
        }

        d.pop_front();
      } else if(d.size() < k) {
        d.push_back(f[i][r]);
        if(f[i][r] == 'o') {
          ok++;
        } else if(f[i][r] == 'x') {
          ng++;
        } else {
          hoge++;
        }
        r++;
      } else if(d.size() == k) {
        if(ng == 0) {
          ans = min(ans, hoge);
        }

        if(d.front() == 'o') {
          ok--;
        } else if(d.front() == 'x') {
          ng--;
        } else {
          hoge--;
        }

        d.pop_front();
      }
      
      // for(auto c : d) {
      //   cout << c;
      // }
      // cout << endl;
    }

    if(d.size() == k) {
        if(ng == 0) {
          ans = min(ans, hoge);
        }

        if(d.front() == 'o') {
          ok--;
        } else if(d.front() == 'x') {
          ng--;
        } else {
          hoge--;
        }

        d.pop_front();
      }
  }

  for(int i = 0; i < w; i++) {
    int ok = 0;
    int ng = 0;
    int hoge = 0;

    deque<char> d;
    int r = 0;

    while(r < h) {
      if(ng >= 1) {
        if(d.front() == 'o') {
          ok--;
        } else if(d.front() == 'x') {
          ng--;
        } else {
          hoge--;
        }

        d.pop_front();
      } else if(d.size() < k) {
        d.push_back(f[r][i]);
        if(f[r][i] == 'o') {
          ok++;
        } else if(f[r][i] == 'x') {
          ng++;
        } else {
          hoge++;
        }
        r++;
      } else if(d.size() == k) {
        if(ng == 0) {
          ans = min(ans, hoge);
        }

        if(d.front() == 'o') {
          ok--;
        } else if(d.front() == 'x') {
          ng--;
        } else {
          hoge--;
        }

        d.pop_front();
      }

      // for(auto c : d) {
      //   cout << c;
      // }
      // cout << endl;
    }

    if(d.size() == k) {
        if(ng == 0) {
          ans = min(ans, hoge);
        }

        if(d.front() == 'o') {
          ok--;
        } else if(d.front() == 'x') {
          ng--;
        } else {
          hoge--;
        }

        d.pop_front();
      }
  }

  cout << (ans == 1e9 ? -1 : ans);
}
