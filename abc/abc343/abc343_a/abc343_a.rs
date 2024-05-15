use proconio::input;

fn main() {
    input! {
        a: u8,
        b: u8
    }

    for i in 0..10 {
        if i != a + b {
            print!("{}", i);
            break;
        }
    }
}
