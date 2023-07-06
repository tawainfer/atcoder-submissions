// https://atcoder.jp/contests/abc184/submissions/43291060

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int x = stdIn.nextInt();
    String s = stdIn.next();

    for(int i = 0; i < n; i++) {
      char c = s.charAt(i);

      if(c == 'o') {
        x++;
      } else {
        if(x > 0) {
          x--;
        }
      }
    }

    System.out.println(x);
  }
}
