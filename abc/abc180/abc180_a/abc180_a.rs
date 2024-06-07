use proconio::input;

fn main() {
    input! {
        n: u16,
        a: u16,
        b: u16,
    }

    print!("{}", n - a + b);
}
