// https://atcoder.jp/contests/abc353/submissions/53376567

use proconio::input;
use std::collections::HashMap;

type BigInt = i128;

fn pow10(x: usize) -> BigInt {
    let mut res: BigInt = 1;
    for _ in 0..x {
        res *= 10;
    }
    res
}

fn main() {
    input! {
        n: usize,
        a: [BigInt; n],
    }
    
    let mut m: HashMap<usize, BigInt> = HashMap::new();
    
    for num in &a {
        *m.entry(num.to_string().len()).or_insert(0) += 1;
    }
    
    let mut b: Vec<BigInt> = vec![0; n + 1];
    for i in 1..=n {
        b[i] = b[i - 1] + a[i - 1];
    }
    
    let mut ans: BigInt = 0;
    let modulo: BigInt = 998_244_353;
    for i in 1..=n {
        let size = a[i - 1].to_string().len();
        if let Some(count) = m.get_mut(&size) {
            *count -= 1;
        }
        
        ans += b[n] - b[i];
        ans %= modulo;
        
        for j in 1..=10 {
            if let Some(count) = m.get(&j) {
                ans += pow10(j) * a[i - 1] * (*count);
                ans %= modulo;
            }
        }
    }
    
    println!("{}", (ans % modulo + modulo) % modulo);
}

