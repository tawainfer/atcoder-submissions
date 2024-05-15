use proconio::input;

fn main() {
    input! {
        n: u16
    }

    let mut t = 0;
    let mut a = 0;
    for i in 0..n {
        input! {
            x: u16,
            y: u16
        }
        t += x;
        a += y;
    }

    println!("{}",
        if t > a {
            "Takahashi"
        } else if t < a {
            "Aoki"
        } else {
            "Draw"
        }
    );
}
