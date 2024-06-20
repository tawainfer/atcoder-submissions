use proconio::input;

fn main() {
    input! {
        s: String,
        t: String,
    }

    print!("{}", if s == "AtCoder" && t == "Land" {"Yes"} else {"No"});
}