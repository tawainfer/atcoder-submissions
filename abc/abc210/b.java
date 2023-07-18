// https://atcoder.jp/contests/abc210/submissions/43735245

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    String s = stdIn.next();

    for(int i = 0; i < n; i++) {
      if(s.charAt(i) == '1') {
        if(i % 2 == 0) System.out.println("Takahashi");
        else System.out.println("Aoki");
        break;
      }
    }
  }
}
