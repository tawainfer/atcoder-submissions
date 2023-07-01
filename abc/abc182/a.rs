// https://atcoder.jp/contests/abc182/submissions/30510503

use proconio::input;

fn main() {
    input! {
        a: i32,
        b: i32
    }
    println!("{}", 2 * a + 100 - b);
}
