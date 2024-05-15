use proconio::input;

fn max(a: u16, b: u16) -> u16 {
    if a > b {a} else {b}
}

fn main() {
    input! {
        a: i16,
        b: i16,
        c: i16,
        d: i16
    }

    print!("{}", a * d - b * c);
}
