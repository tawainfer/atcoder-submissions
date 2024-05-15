use proconio::input;

fn max(a: u16, b: u16) -> u16 {
    if a > b {a} else {b}
}

fn main() {
    input! {
        a: [u8; 3]
    }

    let mut check = false;
    for i in 0..3 {
        if check {
            break;
        }

        for j in (i + 1)..3 {
            if a[i] == a[j] {
                check = true;
                print!("{}", a[3 - i - j]);
                break;
            }
        }
    }

    if !check {
        print!("{}", 0);
    }
}
