use proconio::input;

fn main() {
  input! {
    x: i8,
    y: i8,
  }

  print!("{}", if (x - y).abs() < 3 {"Yes"} else {"No"});
}
