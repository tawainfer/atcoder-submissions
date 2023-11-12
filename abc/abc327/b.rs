// https://atcoder.jp/contests/abc327/submissions/47516293

use proconio::input;

fn main() {
    input! {
        b: i128
    }

    let mut ans = -1;
    for i in 1..20 {
        let mut a = 1;
        for j in 0..i {
            a *= i;
        }

        if a == b {
            ans = i;
        }
    }

    print!("{}", ans);
}

