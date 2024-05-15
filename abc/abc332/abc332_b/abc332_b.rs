use proconio::input;

fn main() {
    input! {
        k: u32,
        g: u32,
        m: u32,
    }

    let mut cg = 0;
    let mut cm = 0;
    for i in 0..k {
        if cg == g {
            cg = 0;
        } else if cm == 0 {
            cm = m;
        } else if cg + cm > g {
            cm -= g - cg;
            cg = g;
        } else {
            cg += cm;
            cm = 0;
        }
    }

    print!("{} {}", cg, cm);
}
