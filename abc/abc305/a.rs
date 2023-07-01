// https://atcoder.jp/contests/abc305/submissions/42235536

use::proconio::input;

fn main() {
  input! {
    n: u8
  }

  if (n % 5 < 3) {
    println!("{}", n - n % 5);
  } else {
    println!("{}", n + (5 - n % 5));
  }
}
