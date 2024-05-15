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

const long double PI = 3.14159265358979;
long double T, L, X, Y, E;
 
long double calc() {
    long double cx = 0;
    long double cy = -(L / 2) * sin(E / T * 360.0 * PI / 180.0);
    long double cz = (L / 2) - (L / 2) * cos(E / T * 360.0 * PI / 180.0);
    long double x = sqrt((cx - X) * (cx - X) + (cy - Y) * (cy - Y));
    long double y = cz;
    return atan2(y, x) * 180.0 / PI;
}
 
int main() {
    cin >> T >> L >> X >> Y;
 
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        cin >> E;
        printf("%.12Lf\n", calc());
    }
}