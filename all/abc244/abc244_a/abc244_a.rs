use proconio::input;

fn main() {
    input! {
        mut n: usize,
        s: String
    }
    
    print!("{}", s.chars().nth(n - 1).unwrap());
}
