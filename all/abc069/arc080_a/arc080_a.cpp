#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define fix(i) fixed << setprecision(i)
#define fore(i, a) for(auto& i : a)
#define ll long long
#define nextp(v) next_permutation(all(v))
#define rep(i, a, b) for(int i = a; i < b; i++)
#define reps(i, a, b) for(int i = a; i <= b; i++)
#define rrep(i, a, b) for(int i = a; i > b; i--)
#define rreps(i, a, b) for(int i = a; i >= b; i--)
#define repv(i, a, b, c) for(int i = a; i < b; i += c)
#define repsv(i, a, b, c) for(int i = a; i <= b; i += c)
#define rrepv(i, a, b, c) for(int i = a; i > b; i -= c)
#define rrepsv(i, a, b, c) for(int i = a; i >= b; i -= c)
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<int> a;

  int x;
  int zero = 0, odd = 0, even = 0;

  while(cin >> x) {
    if(x % 4 == 0) even++;
    else if(x % 2 == 0) odd++;
    else zero++;
  }

  while(zero > 0 || odd > 0 || even > 0) {
    if(a.empty()) {
      if(zero > 0) {
        a.push_back(0);
        zero--;
      } else if(odd > 0) {
        a.push_back(1);
        odd--;
      } else {
        a.push_back(2);
        even--;
      }
    } else {
      if(a.back() == 0) {
        if(even > 0) {
          a.push_back(2);
          even--;
        } else {
          cout << "No";
          return 0;
        }
      } else if(a.back() == 1) {
        if(odd > 0) {
          a.push_back(1);
          odd--;
        } else if(even > 0) {
          a.push_back(2);
          even--;
        } else {
          cout << "No";
          return 0;
        }
      } else if(a.back() == 2) {
        if(zero > 0) {
          a.push_back(0);
          zero--;
        } else if(odd > 0) {
          a.push_back(1);
          odd--;
        } else if(even > 0) {
          a.push_back(2);
          even--;
        } else {
          cout << "No";
          return 0;
        }
      }
    }
  }

  cout << "Yes";
  return 0;
}