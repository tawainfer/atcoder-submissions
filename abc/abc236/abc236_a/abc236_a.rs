use proconio::input;

fn main() {
  input! {
    s: String,
    mut a: usize,
    mut b: usize,
  }
  a -= 1;
  b -= 1;

  for i in 0..s.len() {
    print!("{}", s.chars().nth(
      if i == a {b}
      else if i == b {a}
      else {i}
    ).unwrap());
  }
}
