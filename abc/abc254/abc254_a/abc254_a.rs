use proconio::input;

fn main() {
  input! {
    n: u16,
  }

  let s = n.to_string();
  print!("{}", s.get(1..).unwrap());
}
