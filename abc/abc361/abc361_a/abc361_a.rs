use proconio::input;

fn main() {
    input! {
      n: u8,
      k: u8,
      x: u8,
      a: [u8; n],
    }
    
    for i in 0..n {
      print!("{} ", a.iter().nth(i as usize).unwrap());
      if i == k - 1 {
        print!("{} ", x);
      }
    }
}