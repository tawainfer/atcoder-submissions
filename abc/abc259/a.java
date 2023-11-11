// https://atcoder.jp/contests/abc259/submissions/47439538

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int m = stdIn.nextInt();
    int x = stdIn.nextInt();
    int t = stdIn.nextInt();
    int d = stdIn.nextInt();

    do {
      if(n <= x) {
        t -= d;
      }
      n--;

      if(n == m) {
        System.out.print(t);
        break;
      }
    } while(n > 0);
  }
}

