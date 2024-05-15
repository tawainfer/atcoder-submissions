use proconio::input;

fn main() {
    input! {
        n: u8
    }

    for i in 0..(n + 1) {
        for j in 0..(n + 1) {
            for k in 0..(n + 1) {
                if i + j + k <= n {
                    println!("{} {} {}", i, j, k);
                }
            }
        }
    }
}
