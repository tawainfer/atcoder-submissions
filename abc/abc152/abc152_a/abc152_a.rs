use proconio::input;

fn main() {
    input! {
        n: u8,
        m: u8
    }
    let mut b = 0;
    if n == m {
      println!("Yes");
    } else {
      println!("No");
    }
}
