use proconio::input;

fn s(s: String) -> u8 {
  let mut res = 0;
  for c in s.chars() {
    res += (c as u8) - 48;
  }
  res
}

fn main() {
  input! {
    a: i16,
    b: i16,
  }

  print!("{}", if s(a.to_string()) > s(b.to_string()) {s(a.to_string())} else {s(b.to_string())});
}
