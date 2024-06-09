use proconio::input;

fn main() {
  input! {
      s: String,
  }

  let upper: Vec<_> = s.chars().filter(|c| &'A' <= c && c <= &'Z').collect();
  let lower: Vec<_> = s.chars().filter(|c| &'a' <= c && c <= &'z').collect();
  println!("{}", if upper.len() > lower.len() {s.to_uppercase()} else {s.to_lowercase()});
}
