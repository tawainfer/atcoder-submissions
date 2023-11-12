// https://atcoder.jp/contests/abc200/submissions/47525439

use proconio::input;

fn main() {
    input! {
        n: u16
    }

    for i in 1..31 {
        if n <= i * 100 {
            print!("{}", i);
            break;
        }
    }
}

