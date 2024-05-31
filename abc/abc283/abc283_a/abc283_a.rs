use proconio::input;

fn main() {
  input! {
    a: i32,
    b: i32,
  }

  print!("{}", a.pow(b as u32));
}