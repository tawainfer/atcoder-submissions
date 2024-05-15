use proconio::input;

fn main() {
    input! {
        n: usize,
        d: [usize; n]
    }

    let mut ans = 0;
    for i in 1..(n + 1) {
        for j in 1..(d[i - 1] + 1) {
            let mut cm = i;
            let mut cd = j;

            if cm >= 10 {
                if cm % 11 != 0 {
                    continue;
                }
                cm /= 11;
            }

            if cd >= 10 {
                if cd % 11 != 0 {
                    continue;
                }
                cd /= 11;
            }

            if cm == cd {
                ans += 1;
            }
        }
    }

    print!("{}", ans);
}
