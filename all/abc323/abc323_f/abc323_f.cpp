#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ptn1(ll xa, ll ya, ll xb, ll yb, ll xc, ll yc) {
  ll ans = 0;

  if(xb < xc) {
    ans += abs(xa - (xb - 1)) + abs(ya - yb);
    if(xb < xa && yb == ya) ans += 2;
    ans += (xc - xb);
    xa = xc - 1;
    ya = yb;

    if(yb < yc) {
      ans += 2;
      ans += yc - yb;
    } else if(yc < yb) {
      ans += 2;
      ans += yb - yc;
    }
  } else if(xc < xb) {
    ans += abs(xa - (xb + 1)) + abs(ya - yb);
    if(xa < xb && yb == ya) ans += 2;
    ans += (xb - xc);
    xa = xc + 1;
    ya = yb;

    if(yb < yc) {
      ans += 2;
      ans += yc - yb;
    } else if(yc < yb) {
      ans += 2;
      ans += yb - yc;
    }
  } else {
    if(yb < yc) {
      ans += abs(xa - xc) + abs(ya - (yb - 1));
      if(yb < ya && xa == xb) ans += 2;
      ans += (yc - yb);
    } else if(yc < yb) {
      ans += abs(xa - xc) + abs(ya - (yb + 1));
      if(ya < yb && xa == xb) ans += 2;
      ans += (yb - yc);
    }
  }

  return ans;
}

ll ptn2(ll xa, ll ya, ll xb, ll yb, ll xc, ll yc) {
  ll ans = 0;

  if(yb < yc) {
    ans += abs(xa - xb) + abs(ya - (yb - 1));
    if(yb < ya && xa == xb) ans += 2;
    ans += (yc - yb);
    xa = xb;
    ya = yc - 1;

    if(xb < xc) {
      ans += 2;
      ans += xc - xb;
    } else if(xc < xb) {
      ans += 2;
      ans += xb - xc;
    }
  } else if(yc < yb) {
    ans += abs(xa - xb) + abs(ya - (yb + 1));
    if(ya < yb && xa == xb) ans += 2;
    ans += (yb - yc);
    xa = xb;
    ya = yc + 1;

    if(xb < xc) {
      ans += 2;
      ans += xc - xb;
    } else if(xc < xb) {
      ans += 2;
      ans += xb - xc;
    }
  } else {
    if(xb < xc) {
      ans += abs(xa - (xb - 1)) + abs(ya - yb);
      if(xb < xa && yb == ya) ans += 2;
      ans += (xc - xb);
    } else if(xc < xb) {
      ans += abs(xa - (xb + 1)) + abs(ya - yb);
      if(xa < xb && yb == ya) ans += 2;
      ans += (xb - xc);
    }
  }

  return ans;
}

int main() {
  ll xa, ya, xb, yb, xc, yc;
  cin >> xa >> ya >> xb >> yb >> xc >> yc;

  ll ans = min(ptn1(xa, ya, xb, yb, xc, yc), ptn2(xa, ya, xb, yb, xc, yc));
  cout << ans;
}