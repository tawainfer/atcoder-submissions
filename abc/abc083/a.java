// https://atcoder.jp/contests/abc083/submissions/41617938

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();
    int c = stdIn.nextInt();
    int d = stdIn.nextInt();
    
    int l = a + b;
    int r = c + d;

    if(l > r) {
      System.out.println("Left");
    } else if(l < r) {
      System.out.println("Right");
    } else {
      System.out.println("Balanced");
    }
  }
}
