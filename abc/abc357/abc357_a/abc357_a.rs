use proconio::input;

fn main() {
  input! {
      n: i8,
      mut m: i8,
      h: [i8; n],
  }

  let mut ans = 0;
  for x in h {
      if m - x < 0 {
          break;
      }
      ans += 1;
      m -= x;
  }

  print!("{}", ans);
}
