// https://atcoder.jp/contests/abc230/submissions/47524681

use proconio::input;

fn main() {
    input! {
        n: u8
    }

    print!("AGC0");
    if n < 10 {print!("{}", 0);}
    print!("{}", if n < 42 {n} else {n + 1});
}

