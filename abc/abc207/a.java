// https://atcoder.jp/contests/abc207/submissions/40778087

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);
    
    int a = stdIn.nextInt();
    int b = stdIn.nextInt();
    int c = stdIn.nextInt();
    
    System.out.println(Math.max(a + b, Math.max(b + c, c + a)));
  }
}
