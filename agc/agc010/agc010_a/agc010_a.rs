use proconio::input;

fn main() {
  input! {
    n: i32,
    a: [i32; n],
  }

  let mut odd = 0;
  for x in &a {
    if x % 2 == 1 {
      odd += 1;
    }
  }

  print!("{}", if odd % 2 == 0 {"YES"} else {"NO"});
}
