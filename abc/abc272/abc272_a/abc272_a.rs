use proconio::input;

fn main() {
  input! {
    n: i16,
    a: [i16; n],
  }

  print!("{}", a.iter().sum::<i16>());
}
