use proconio::input;

fn main() {
  input! {
    a: [u8; 4],
  }

  print!("{}", a.iter().min().unwrap());
}
