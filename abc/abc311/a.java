// https://atcoder.jp/contests/abc311/submissions/43891044

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    String s = stdIn.next();

    boolean[] check = new boolean[3];
    for(int i = 0; i < 3; i++) check[i] = false;

    for(int i = 0; i < n; i++) {
      check[(int)s.charAt(i) - 65] = true;

      boolean flag = true;
      for(int j = 0; j < 3; j++) {
        if(!check[j]) {
          flag = false;
        }
      }

      if(flag) {
        System.out.println(i + 1);
        System.exit(0);
      }
    }
  }
}
