use proconio::input;

fn main() {
  input! {
    s: String,
  }

  for i in 0..s.len() {
    if s.chars().nth(i).unwrap() < 'a' {
      print!("{}", i + 1);
      break;
    }
  }
}
