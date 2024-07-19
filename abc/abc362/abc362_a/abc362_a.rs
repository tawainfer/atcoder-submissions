use proconio::input;
use std::cmp;

fn main() {
    input! {
      r: u8,
      g: u8,
      b: u8,
      c: String,
    }

    println!("{}", match c.as_str() {
      "Red" => cmp::min(g, b),
      "Green" => cmp::min(b, r),
      _ => cmp::min(r, g),
    });
}