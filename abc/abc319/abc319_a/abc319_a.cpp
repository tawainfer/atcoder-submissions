#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> name = {
    "tourist",
    "ksun48",
    "Benq",
    "Um_nik",
    "apiad",
    "Stonefeang",
    "ecnerwala",
    "mnbvmar",
    "newbiedmy",
    "semiexp"
  };

  vector<int> rating = {
    3858,
    3679,
    3658,
    3648,
    3638,
    3630,
    3613,
    3555,
    3516,
    3481
  };

  string s;
  cin >> s;

  for(int i = 0; i < 10; i++) {
    if(name[i] == s) {
      cout << rating[i];
      return 0;
    }
  }
}