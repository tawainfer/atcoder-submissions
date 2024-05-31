use proconio::input;

fn main() {
  input! {
    l: usize,
    r: usize,
  }

  let s = "atcoder";
  print!("{}", &s[(l - 1)..r]);
}
