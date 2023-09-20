// https://atcoder.jp/contests/abc320/submissions/45741497

import java.util.Scanner;

class Main {
 static int pow(int a, int b) {
    int res = 1;
    for(int i = 0; i < b; i++) {
      res *= a;
    }
    return res;
  }

  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();

    System.out.println(pow(a, b) + pow(b, a));
  }
}

