// https://atcoder.jp/contests/abc329/submissions/47773330

use proconio::input;

fn main() {
  input! {
    n: usize,
    a: [usize; n]
  }

  let mut cnt = [0; 109];
  for x in a {
    cnt[x] += 1;
  }

  let mut check = 0;
  for i in (1..101).rev() {
    if cnt[i] >= 1 {
      check += 1;
    }

    if check >= 2 {
      print!("{}", i);
      break;
    }
  }
}
