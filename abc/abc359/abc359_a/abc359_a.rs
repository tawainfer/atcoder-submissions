use proconio::input;

fn main() {
    input! {
        n: u8,
    }

    let mut ans = 0;
    for _ in 0..n {
        input! {
            s: String,
        }
        if s == "Takahashi" {
            ans += 1;
        }
    }

    print!("{}", ans);
}