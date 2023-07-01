// https://atcoder.jp/contests/abc172/submissions/30510457

use proconio::input;

fn main() {
    input! {
        a: i32
    }
    println!("{}", a + a * a + a * a * a);
}
