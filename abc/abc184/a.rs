// https://atcoder.jp/contests/abc184/submissions/30510426

use proconio::input;

fn main() {
    input! {
        a: i32,
        b: i32,
        c: i32,
        d: i32
    }
    println!("{}", a * d - b * c);
}
