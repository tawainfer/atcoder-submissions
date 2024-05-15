use proconio::input;

fn main() {
    input! {
        s: u8,
        w: u8
    }
    if s > w {print!("safe")}
    else {print!("unsafe")}
}
