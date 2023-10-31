// https://atcoder.jp/contests/abc322/submissions/47099150

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    String s = stdIn.next();

    for(int i = 0; i < n - 2; i++) {
      if(s.charAt(i) == 'A' && s.charAt(i + 1) == 'B' && s.charAt(i + 2) == 'C') {
        System.out.println(i + 1);
        System.exit(0);
      }
    }

    System.out.println(-1);
  }
}
