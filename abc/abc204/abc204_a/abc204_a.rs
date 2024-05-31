use proconio::input;

fn main() {
  input! {
    x: u8,
    y: u8,
  }

  print!("{}", if x == y {x} else {3 - x - y});
}
