use proconio::input;

fn main() {
    input! {
        n: usize
    }

    for _ in 0..n {
        input! {
            a: i32,
            b: i32
        }
        println!("{}", a + b);
    }
}
