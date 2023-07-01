// https://atcoder.jp/contests/abc240/submissions/41451176

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt() - 1;
    int b = stdIn.nextInt() - 1;
    
    if((a + 1) % 10 == b || (a + 10 - 1) % 10 == b) {
      System.out.println("Yes");
    } else {
      System.out.println("No");
    }
  }
}
