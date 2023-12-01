// https://atcoder.jp/contests/abc330/submissions/48061521

use proconio::input;

fn main() {
    input! {
        n: u16,
        l: u16,
        a: [u16; n]
    }

    let mut ans = 0;
    for x in a {
        if x >= l {
            ans += 1;
        }
    }

    print!("{}", ans);
}

