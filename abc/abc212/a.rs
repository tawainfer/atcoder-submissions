// https://atcoder.jp/contests/abc212/submissions/47525207

use proconio::input;

fn main() {
    input! {
        a: u8,
        b: u8
    }

    print!("{}", if 0 < a && b == 0 {"Gold"} else if a == 0 && 0 < b {"Silver"} else {"Alloy"});
}

