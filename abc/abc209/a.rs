// https://atcoder.jp/contests/abc209/submissions/47525256

use proconio::input;

fn main() {
    input! {
        a: u8,
        b: u8
    }

    let mut cnt = 0;
    for i in a..(b + 1) {
       cnt += 1; 
    }

    print!("{}", cnt);
}

