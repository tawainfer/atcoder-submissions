use proconio::input;

fn main() {
  input! {
    n: u8,
    s: String,
  }

  print!("{}", if s.chars().nth((n - 1).into()).unwrap() == 'o' {"Yes"} else {"No"});
}
