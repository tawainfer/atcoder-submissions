use proconio::input;

fn main() {
    input! {
        x: u8,
        y: u8
    }

    if x < y && x + 2 >= y || x > y && x - 3 <= y {
        print!("Yes")
    } else {
        print!("No")
    }
}
