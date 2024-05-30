use proconio::input;

fn main() {
  input! {
    s: String,
  }

  print!("{}", if s.chars().nth(s.len() - 1).unwrap() == 'r' {"er"} else {"ist"});
}
