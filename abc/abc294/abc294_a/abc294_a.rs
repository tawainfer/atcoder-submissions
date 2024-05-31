use proconio::input;

fn main() {
  input! {
    n: u16,
    a: [u16; n],
  }

  for x in a.iter() {
    if x % 2 == 0 {print!("{} ", x)};
  }
}
