use proconio::input;

fn main() {
    input! {
        mut a: u16,
        b: u16,
        d: u16,
    }

    while a <= b {
        print!("{} ", a);
        a += d;
    }
}
