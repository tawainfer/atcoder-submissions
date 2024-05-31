use proconio::input;

fn main() {
  input! {
    n: u16,
    r: u16,
  }

  print!("{}", if n >= 10 {r} else {r + 100 * (10 - n)});
}
