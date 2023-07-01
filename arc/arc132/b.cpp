// https://atcoder.jp/contests/arc132/submissions/42066156

#include <bits/stdc++.h>
using namespace std;

int shift_search(deque<int> &d) {
  int f = 1;
  int b = d.size();

  int cnt = 0;
  do {
    if(d.front() == f && d.back() == b) return cnt;
    if(d.front() == b && d.back() == f) return cnt + 1;

    d.push_back(d.front());
    d.pop_front();
    cnt++;
  } while(cnt < (int)d.size());
  throw runtime_error("count over");
}

int main() {
  int n;
  cin >> n;

  deque<int> q(n), r;
  for(int &z : q) {
    cin >> z;
    r.push_front(z);
  }

  int ans = shift_search(q);
  ans = min(ans, shift_search(r) + 1);
  
  cout << ans;
  return 0;
}
