use proconio::input;

fn main() {
    input! {
        s: String,
    }

    for i in 0..s.len() - 1 {
        print!("{}", &s[i..i + 1]);
    }
    print!("4");
}
