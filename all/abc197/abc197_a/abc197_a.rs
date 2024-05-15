use proconio::input;

fn max(a: u16, b: u16) -> u16 {
    if a > b {a} else {b}
}

fn main() {
    input! {
        s: String
    }

    for i in 1..4 {
        let idx = i % 3;
        print!("{}", &s[idx..(idx + 1)]);
    }
}
