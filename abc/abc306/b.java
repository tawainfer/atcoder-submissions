// https://atcoder.jp/contests/abc306/submissions/45955838

import java.util.Scanner;
import java.math.BigInteger;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    long[] a = new long[64];
    for(int i = 0; i < 64; i++) {
      a[i] = stdIn.nextLong();
    }

    var ans = new BigInteger("0");
    var base = new BigInteger("1");
    for(int i = 0; i < 64; i++) {
      if(a[i] == 1) {
        ans = ans.add(base);
      }
      base = base.multiply(new BigInteger("2"));
    }

    System.out.println(ans.toString());
  }
}

