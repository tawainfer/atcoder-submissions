use proconio::input;

fn main() {
    input! {
        a: i16,
        b: i16,
    }

    print!("{}", 2 * a + 100 - b);
}
