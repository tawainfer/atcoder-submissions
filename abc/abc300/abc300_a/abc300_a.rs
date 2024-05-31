use proconio::input;

fn main() {
  input! {
    n: u16,
    a: u16,
    b: u16,
    c: [u16; n],
  }

  for i in 0..n {
    if a + b == c[i as usize] {
      print!("{}", i + 1);
      break;
    }
  }
}
