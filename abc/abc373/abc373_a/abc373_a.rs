use proconio::input;

fn main() {
  let mut ans = 0;
  for i in 1..=12 {
    input! {
      s: String,
    }

    if s.chars().count() == i {
      ans += 1
    }
  }
  
  print!("{}", ans);
}