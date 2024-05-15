#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string r, c;
  cin >> r >> c;

  vector<int> pa, pb, pc;
  for(int i = 0; i < n; i++) {
    pa.push_back(i);
    pb.push_back(i);
    pc.push_back(i);
  }

  do {
    do {
      do {
        vector<vector<int>> f(n, vector<int>(n, 9));

        bool check = true;
        for(int i = 0; i < n; i++) {
          if(f[i][pa[i]] != 9) check = false;
          f[i][pa[i]] = 0;
        }

        for(int i = 0; i < n; i++) {
          if(f[i][pb[i]] != 9) check = false;
          f[i][pb[i]] = 1;
        }

        for(int i = 0; i < n; i++) {
          if(f[i][pc[i]] != 9) check = false;
          f[i][pc[i]] = 2;
        }

        for(int i = 0; i < n; i++) {
          for(int j = 0; j < n; j++) {
            if(f[i][j] != 9) {
              if((char)(f[i][j] + 65) != r[i]) check = false;
              break;
            }
          }
        }

        for(int i = 0; i < n; i++) {
          for(int j = 0; j < n; j++) {
            if(f[j][i] != 9) {
              if((char)(f[j][i] + 65) != c[i]) check = false;
              break;
            }
          }
        }

        if(check) {
          cout << "Yes" << endl;;

          for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
              if(f[i][j] == 0) cout << 'A';
              else if(f[i][j] ==  1) cout << 'B';
              else if(f[i][j] == 2) cout << 'C';
              else cout << '.';
            }
            cout << endl;
          }

          return 0;
        }
      } while(next_permutation(pa.begin(), pa.end()));
    } while(next_permutation(pb.begin(), pb.end()));
  } while(next_permutation(pc.begin(), pc.end()));

  cout << "No";
}