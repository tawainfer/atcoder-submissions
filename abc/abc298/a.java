// https://atcoder.jp/contests/abc298/submissions/44933021

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    String s = stdIn.next();

    for(int i = 0; i < n; i++) {
      if(s.charAt(i) == 'x') {
        System.out.println("No");
        System.exit(0);
      }
    }

    boolean check = false;
    for(int i = 0; i < n; i++) {
      if(s.charAt(i) == 'o') {
        check = true;
      }
    }

    if(check) {
      System.out.println("Yes");
    } else {
      System.out.println("No");
    }
  }
}
