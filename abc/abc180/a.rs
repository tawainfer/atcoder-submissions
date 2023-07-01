// https://atcoder.jp/contests/abc180/submissions/42235325

use::proconio;

fn main() {
  proconio::input! {
    n: u16,
    a: u16,
    b: u16,
  }

  println!("{}", n - a + b);
}
