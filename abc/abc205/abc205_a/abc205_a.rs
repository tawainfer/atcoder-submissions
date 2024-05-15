use proconio::input;

fn max(a: u16, b: u16) -> u16 {
    if a > b {a} else {b}
}

fn main() {
    input! {
        a: f64,
        b: f64,
    }

    print!("{}", a / 100.0 * b);
}
