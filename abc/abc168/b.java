// https://atcoder.jp/contests/abc168/submissions/43735297

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int k = stdIn.nextInt();
    String s = stdIn.next();

    if(s.length() <= k) {
      System.out.println(s);
    } else {
      for(int i = 0; i < k; i++) {
        System.out.print(s.charAt(i));
      }
      System.out.println("...");
    }
  }
}
