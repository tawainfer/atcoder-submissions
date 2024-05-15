use proconio::input;

fn main() {
    input! {
        n: u16
    }

    for i in 1..31 {
        if n <= i * 100 {
            print!("{}", i);
            break;
        }
    }
}
