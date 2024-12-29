#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      for(int k = 0; k < 3; k++) {
        vector<int> sum(3, 0);
        sum[i] += a;
        sum[j] += b;
        sum[k] += c;

        // multiset<int> se;
        vector<int> v;
        for(int l = 0; l < 3; l++) {
          if(sum[l] != 0) v.push_back(sum[l]);
        }
        sort(v.begin(), v.end());

        if(v.front() == v.back() && v.size() >= 2) {
          cout << "Yes";
          // for(auto z : se) cout << z << " ";
          return 0;
        }
      }
    }
  }

  cout << "No";
}