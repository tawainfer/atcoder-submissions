use proconio::input;

fn main() {
  input! {
    mut n: i8
  }
  
  while n >= 0 {
    println!("{}", n);
    n -= 1;
  }
}