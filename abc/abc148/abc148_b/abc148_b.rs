use proconio::input;

fn main() {
  input! {
      n: u8,
      s: String,
      t: String,
  }

  for (cs, ct) in s.chars().zip(t.chars()) {
      print!("{}{}", cs, ct);
  }
}
