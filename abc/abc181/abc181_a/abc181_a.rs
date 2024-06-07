use proconio::input;

fn main() {
    input! {
        n: u8,
    }

    print!("{}", if n % 2 == 0 {"White"} else {"Black"});
}
