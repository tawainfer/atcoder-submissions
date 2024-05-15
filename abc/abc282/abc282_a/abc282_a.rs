use proconio::input;

fn main() {
    input! {
        k: usize
    }

    let s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for i in 0..k {
        print!("{}", &s[i..(i + 1)]);
    }
}
