use proconio::input;

fn main() {
    input! {
        n: u8
    }

    print!("1");
    for i in 0..n {
        print!("01");
    }
}
