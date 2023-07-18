// https://atcoder.jp/contests/abc162/submissions/43711748

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    for(int i = 0; i < s.length(); i++) {
      if(s.charAt(i) == '7') {
        System.out.println("Yes");
        System.exit(0);
      }
    }

    System.out.println("No");
  }
}
