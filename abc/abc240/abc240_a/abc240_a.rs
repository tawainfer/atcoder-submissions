use proconio::input;

fn main() {
  input! {
    a: u8,
    b: u8,
  }

  print!("{}", if a + 1 == b || a == 1 && b == 10 {"Yes"} else {"No"});
}
