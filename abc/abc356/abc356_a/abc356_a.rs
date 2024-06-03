use proconio::input;

fn main() {
  input! {
    n: i32,
    l: i32,
    r: i32,
  }

  let a: Vec<i32> = (0..n + 1).collect();
  let mut b: Vec<i32> = Vec::new();
  for i in 1..n + 1 {
    if l <= i && i <= r {
      b.push(i);
    }
  }

  for i in 1..n + 1 {
    print!("{} ", (if l <= i && i <= r {b.pop()} else {Some(i)}).unwrap());
  }
}
