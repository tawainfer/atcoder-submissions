// https://atcoder.jp/contests/abc183/submissions/47813271

use proconio::input;

fn max(a: i8, b: i8) -> i8 {
    if a > b {a} else {b}
}

fn main() {
    input! {
        x: i8
    }

    print!("{}", max(x, 0));
}

