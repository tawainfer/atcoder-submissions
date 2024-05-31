use proconio::input;

fn main() {
  input! {
    s: String,
  }

  for c in s.chars() {
    if c != s.chars().nth(0).unwrap() {
      print!("Lost");
      return;
    }
  }

  print!("Won");
}
