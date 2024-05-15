use proconio::input;

fn main() {
    input! {
        n: u16
    }

    let x = n * 108 / 100;
    print!("{}", if x < 206 {"Yay!"} else if x > 206 {":("} else {"so-so"});
}
