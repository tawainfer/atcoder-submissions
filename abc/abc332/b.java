// https://atcoder.jp/contests/abc332/submissions/48444244

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int k = stdIn.nextInt();
    int g = stdIn.nextInt();
    int m = stdIn.nextInt();

    int cg = 0;
    int cm = 0;
    for(int i = 0; i < k; i++) {
      if(cg == g) {
        cg = 0;
      } else if(cm == 0) {
        cm = m;
      } else if(cg + cm > g) {
        cm -= g - cg;
        cg = g;
      } else {
        cg += cm;
        cm = 0;
      }
    }

    System.out.printf("%d %d", cg, cm);
  }
}
