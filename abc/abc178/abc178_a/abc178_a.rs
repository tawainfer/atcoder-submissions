use proconio::input;

fn main() {
    input! {
        a: u8,
    }
    let mut b = 0;
    if a == 0 {
      b = 1;
    }
    println!("{}", b);
}
