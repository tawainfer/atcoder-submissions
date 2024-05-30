use proconio::input;

fn main() {
  input! {
    a: i8,
    b: i8,
  }

  print!("{}", if a == b {-1} else {6 - a - b});
}
