use proconio::input;

fn main() {
    input! {
        r: u16,
    }
    
    print!("{}", 100 - r % 100);
}
