use proconio::input;

fn main() {
  input! {
    y: i16,
  }

  print!("{}", y + if (y + 2) % 4 == 0 {0} else {4 - ((y + 2) % 4)});
}
