// https://atcoder.jp/contests/abc170/submissions/30525524

use proconio::input;

fn main() {
    input! {
        a: i32,
        b: i32,
        c: i32,
        d: i32,
        e: i32,
    }
  
    let ans = if a == 0 {
        1
    } else if b == 0 {
        2
    } else if c == 0 {
        3
    } else if d == 0 {
        4
    } else {
        5
    };
    print!("{}", ans);
}

