use proconio::input;

fn main() {
  input! {
    s: String,
  }

  print!("{}", if s == "Hello,World!" {"AC"} else {"WA"});
}
