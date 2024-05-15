fn main() {
  proconio::input! {
    n: u64
  }
  
  if(n % 4 != 0) {
    print!("First");
  } else {
    print!("Second");
  }
}