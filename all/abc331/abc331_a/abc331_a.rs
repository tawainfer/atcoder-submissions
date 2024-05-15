use proconio::input;

fn main() {
    input! {
        M: u16,
        D: u16,
        y: u16,
        m: u16,
        d: u16
    }

    if m == M && d == D {
        print!("{} {} {}", y + 1, 1, 1);
    } else if d == D {
        print!("{} {} {}", y, m + 1, 1);
    } else {
        print!("{} {} {}", y, m, d + 1);
    }
}
