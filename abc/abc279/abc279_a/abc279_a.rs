use proconio::input;

fn main() {
  input! {
    s: String,
  }

  let mut ans = 0;
  for c in s.chars() {
    ans += if c == 'v' {1} else {2};
  }

  print!("{}", ans);
}