// https://atcoder.jp/contests/abc181/submissions/30525198

use proconio::input;

fn main() {
    input! {
        n: u8,
    }
    if n % 2 == 0 {print!("White")}
    else {print!("Black")}
}

