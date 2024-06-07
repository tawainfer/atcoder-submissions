use proconio::input;

fn main() {
  input! {
      s: u8,
      w: u8,
  }

  print!("{}", if w >= s {"unsafe"} else {"safe"});
}
