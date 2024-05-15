#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n; cin >> n;
  vector<string> s(n);
  set<string> st;
  for(auto& z : s) {
    cin >> z;
    st.insert(z);
  }

  for(auto& z : s) {
    string t = "!" + z;
    if(st.count(z) && st.count(t)) {
      cout << z;
      return 0;
    }
  }
  cout << "satisfiable";
}