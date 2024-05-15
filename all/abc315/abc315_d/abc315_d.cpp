#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  vector<pair<int, vector<int>>> cr(h, make_pair(w, vector<int>(26, 0)));
  vector<pair<int, vector<int>>> cc(w, make_pair(h, vector<int>(26, 0)));
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      char c;
      cin >> c;
      cr[i].second[c - 'a']++;
      cc[j].second[c - 'a']++;
    } 
  }

  int ar = h;
  int ac = w;
  vector<int> sr;
  vector<int> sc;

  for(int _ = 0; _ < (h + w); _++) {
    for(int i = 0; i < h; i++) {
      for(int j = 0; j < 26; j++) {
        if(cr[i].first < 2) continue;
        if(cr[i].second[j] == cr[i].first) {
          cr[i].first = 0;
          cr[i].second[j] = 0;
          sr.push_back(j);
          ar--;
        }
      }
    }

    for(int i = 0; i < w; i++) {
      for(int j = 0; j < 26; j++) {
        if(cc[i].first < 2) continue;
        if(cc[i].second[j] == cc[i].first) {
          cc[i].first = 0;
          cc[i].second[j] = 0;
          sc.push_back(j);
          ac--;
        }
      }
    }

    while(!sr.empty()) {
      for(int i = 0; i < w; i++) {
        cc[i].second[sr.back()]--;
        cc[i].first--;
      }
      sr.pop_back();
    }

    while(!sc.empty()) {
      for(int i = 0; i < h; i++) {
        cr[i].second[sc.back()]--;
        cr[i].first--;
      }
      sc.pop_back();
    }
  }

  cout << ar * ac;
  return 0;
}