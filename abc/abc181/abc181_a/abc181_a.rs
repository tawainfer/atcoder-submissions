use proconio::input;

fn main() {
    input! {
        n: u8,
    }
    if n % 2 == 0 {print!("White")}
    else {print!("Black")}
}
