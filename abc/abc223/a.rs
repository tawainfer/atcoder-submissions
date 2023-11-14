// https://atcoder.jp/contests/abc223/submissions/47564490

use proconio::input;

fn main() {
    input! {
        x: u16
    }
    
    if x > 0 && x % 100 == 0 {
        print!("Yes")
    } else {
        print!("No")
    }
}

