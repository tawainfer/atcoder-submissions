// https://atcoder.jp/contests/abc343/submissions/50857369

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();

    for(int i = 0; i <= 9; i++) {
      if(i != a + b) {
        System.out.print(i);
        break;
      }
    }
  }
}
