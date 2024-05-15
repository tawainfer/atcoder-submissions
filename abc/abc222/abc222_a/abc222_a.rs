use proconio::input;

fn main() {
    input! {
        n: u16
    }

    let mut a = [0; 4];
    a[0] = n / 1000 % 10;
    a[1] = n / 100 % 10;
    a[2] = n / 10 % 10;
    a[3] = n % 10;

    for x in a {
        print!("{}", x);
    }
}
