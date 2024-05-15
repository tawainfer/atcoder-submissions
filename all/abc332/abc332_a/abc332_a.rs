use proconio::input;

fn main() {
    input! {
        n: u32,
        s: u32,
        k: u32
    }

    let mut ans = 0;
    for i in 0..n {
        input! {
            p: u32,
            q: u32
        }
        ans += p * q;
    }

    if ans < s {
      ans += k
    }

    print!("{}", ans);
}
