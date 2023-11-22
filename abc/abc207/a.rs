// https://atcoder.jp/contests/abc207/submissions/47813133

use proconio::input;

fn max(a: u16, b: u16) -> u16 {
    if a > b {a} else {b}
}

fn main() {
    input! {
        a: u16,
        b: u16,
        c: u16
    }

    print!("{}", max(a + b, max(b + c, c + a)));
}

