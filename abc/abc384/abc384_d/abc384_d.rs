use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    let mut iter = input.trim().split_whitespace();
    let n: usize = iter.next().unwrap().parse().unwrap();
    let s: u128 = iter.next().unwrap().parse().unwrap();

    let mut a = Vec::new();
    input.clear();
    io::stdin().read_line(&mut input).unwrap();
    a.extend(input.trim().split_whitespace().map(|x| x.parse::<u128>().unwrap()));

    let mut b = vec![0u128; n];
    b[0] = a[0];
    for i in 1..n {
        b[i] = b[i - 1] + a[i];
    }

    let mut extended_b = b.clone();
    for i in 0..n {
        extended_b.push(extended_b.last().unwrap() + a[i]);
    }

    let mut ans = false;
    for i in 0..n {
        let mut ok: i128 = -1;
        let mut ng: i128 = 2_000_000_000_000_000_000;
        while ng - ok > 1 {
            let mid = (ok + ng) / 2;
            let mid_u128 = mid as u128;
            let mut sum = 0u128;

            sum += b[n - 1] * (mid_u128 / n as u128);
            let rem = (mid_u128 % n as u128) as usize;

            sum += extended_b[i + rem] - extended_b[i] + a[i];

            if sum == s {
                ans = true;
                break;
            }

            if sum < s {
                ok = mid;
            } else {
                ng = mid;
            }
        }

        if ans {
            break;
        }
    }

    println!("{}", if ans { "Yes" } else { "No" });
}
