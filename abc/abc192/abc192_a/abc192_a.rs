use proconio::input;

fn main() {
  input! {
    x: u32,
  }

  print!("{}", 100 - x % 100);
}
