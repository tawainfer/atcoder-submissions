// https://atcoder.jp/contests/abc219/submissions/47564504

use proconio::input;

fn main() {
    input! {
        x: u8
    }
    
    if x < 40 {
        print!("{}", 40 - x);
    } else if x < 70 {
        print!("{}", 70 - x);
    } else if x < 90 {
        print!("{}", 90 - x);
    } else {
        print!("expert");
    }
}

