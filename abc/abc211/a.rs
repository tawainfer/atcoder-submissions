// https://atcoder.jp/contests/abc211/submissions/47813095

use proconio::input;

fn main() {
    input! {
        a: f64,
        b: f64
    }

    print!("{}", (a - b) / 3.0 + b);
}

