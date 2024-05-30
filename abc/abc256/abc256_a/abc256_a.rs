use proconio::input;

fn main() {
  input! {
    n: u32,
  }

  let mut ans = 1;
  for i in 0..n {
    ans *= 2;
  }

  print!("{}", ans);
}
