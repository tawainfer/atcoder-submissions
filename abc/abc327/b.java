// https://atcoder.jp/contests/abc327/submissions/47345430

import java.util.Scanner;

class Main {
  static long pow(long a, long b) {
    long res = 1;
    while(b > 0) {
      b--;
      res *= a;
    }

    return res;
  }

  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    long b = stdIn.nextLong();
    long max = 10000000;

    for(long i = 1; i < max; i++) {
      if(pow(i, i) > b) break;
      if(pow(i, i) == b) {
        System.out.print(i);
        System.exit(0);
      }
    }

    System.out.print(-1);
  }
}

