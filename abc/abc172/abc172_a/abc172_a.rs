use proconio::input;

fn main() {
  input! {
    a: u16,
  }

  print!("{}", a + a * a + a * a * a);
}
