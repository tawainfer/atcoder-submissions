use std::collections::BinaryHeap;
use std::cmp::Reverse;
use std::io;

const INF: i128 = 2_000_000_000_000_000_000;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    let hwx: Vec<i128> = input
        .trim()
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();
    let (h, w, x) = (hwx[0], hwx[1], hwx[2]);

    input.clear();
    io::stdin().read_line(&mut input).unwrap();
    let mut pq_coords: Vec<i128> = input
        .trim()
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();
    let (mut p, mut q) = (pq_coords[0], pq_coords[1]);
    p -= 1;
    q -= 1;

    let mut f: Vec<Vec<i128>> = Vec::new();
    for _ in 0..h {
        input.clear();
        io::stdin().read_line(&mut input).unwrap();
        f.push(
            input
                .trim()
                .split_whitespace()
                .map(|x| x.parse().unwrap())
                .collect(),
        );
    }

    let dy = [-1, 0, 1, 0];
    let dx = [0, -1, 0, 1];

    let mut pq = BinaryHeap::new();

    for i in 0..4 {
        let ey = p + dy[i];
        let ex = q + dx[i];
        if ey < 0 || ey >= h || ex < 0 || ex >= w {
            continue;
        }
        pq.push(Reverse((f[ey as usize][ex as usize], ey, ex)));
        f[ey as usize][ex as usize] = INF;
    }

    let mut ans = f[p as usize][q as usize];
    f[p as usize][q as usize] = INF;

    while let Some(Reverse((cc, cy, cx))) = pq.pop() {
        if cc * x >= ans {
            continue;
        }

        ans += cc;

        for i in 0..4 {
            let ey = cy + dy[i];
            let ex = cx + dx[i];
            if ey < 0 || ey >= h || ex < 0 || ex >= w {
                continue;
            }
            if f[ey as usize][ex as usize] == INF {
                continue;
            }

            pq.push(Reverse((f[ey as usize][ex as usize], ey, ex)));
            f[ey as usize][ex as usize] = INF;
        }
    }

    println!("{}", ans);
}
