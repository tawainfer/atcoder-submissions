// https://atcoder.jp/contests/abc328/submissions/47516137

use proconio::input;

fn main() {
    input! {
        n: u16,
        x: u16,
        s: [u16; n]
    }

    let mut sum = 0;
    for i in 0..n {
        if s[i as usize] <= x {
            sum += s[i as usize];
        }
    }

    println!("{}", sum);
}

