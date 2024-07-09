fn main() {
  proconio::input! {
    s: String,
  }
  
  if s == "SMR" || s == "MSR" || s == "MRS" {
    print!("No");
  } else {
    print!("Yes");
  }
}