use proconio::input;

fn main() {
  input! {
    x: i8,
  }

  print!("{}", if x >= 30 {"Yes"} else {"No"});
}
