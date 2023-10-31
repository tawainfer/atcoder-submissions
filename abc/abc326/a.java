// https://atcoder.jp/contests/abc326/submissions/47098989

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int x = stdIn.nextInt();
    int y = stdIn.nextInt();

    for(int i = x - 3; i < x + 3; i++) {
      if(i == y) {
        System.out.println("Yes");
        System.exit(0);
      }
    }

    System.out.println("No");
  }
}
