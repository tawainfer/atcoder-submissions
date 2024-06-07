use proconio::input;

fn main() {
  input! {
      a: [u8; 5],
  }

  print!("{}", 15 - a.iter().sum::<u8>());
}

