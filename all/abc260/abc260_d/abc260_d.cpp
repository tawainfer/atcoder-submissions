#include <bits/stdc++.h>
using namespace std;

void eat(int p, int &c_turn, vector<int> &parent, vector<int> &turn) {
  turn[p] = c_turn;
  if(parent[p] != 0) eat(parent[p], c_turn, parent, turn);
}

int main() {
  int n, k;
  cin >> n >> k;

  set<pair<int, int>> field;
  vector<int> parent(n + 1, 0);
  vector<int> turn(n + 1, -1);

  for(int i = 1; i <= n; i++) {
    int p;
    cin >> p;

    auto iter = field.lower_bound(make_pair(p, -1));
    if(iter != field.end()) {
      auto pa = (*iter);
      field.erase(iter);
      
      parent[p] = pa.first;
      pa.first = p;
      pa.second++;
      
      if(pa.second < k) {
        field.insert(pa);
      } else {
        eat(p, i, parent, turn);
      }
    } else {
      if(k == 1) {
        turn[p] = i;
      } else {
        field.insert(make_pair(p, 1));
      }
    }
  }

  for(int i = 1; i <= n; i++) {
    cout << turn[i] << endl;
  }
}