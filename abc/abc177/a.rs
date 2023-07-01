// https://atcoder.jp/contests/abc177/submissions/30525272

use proconio::input;

fn main() {
    input! {
        d: usize,
        t: usize,
        s: usize
    }
    if s * t >= d {print!("Yes")}
    else {print!("No")}
}

