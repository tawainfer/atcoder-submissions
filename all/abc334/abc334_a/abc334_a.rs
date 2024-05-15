use proconio::input;

fn main() {
    input! {
        b: u16,
        g: u16
    }
    print!("{}", if b > g {"Bat"} else {"Glove"});
}
