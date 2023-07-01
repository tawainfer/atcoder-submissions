// https://atcoder.jp/contests/abc176/submissions/30524440

use proconio::input;

fn main() {
    input! {
        n: i32,
        x: i32,
        t: i32
    }
    println!("{}", (n + x - 1) / x * t);
}

