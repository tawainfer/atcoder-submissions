// https://atcoder.jp/contests/abc334/submissions/48907346

use proconio::input;

fn main() {
    input! {
        b: u16,
        g: u16
    }
    print!("{}", if b > g {"Bat"} else {"Glove"});
}

