// https://atcoder.jp/contests/newjudge-2308-algorithm/submissions/44338174

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int l = stdIn.nextInt();
    int r = stdIn.nextInt();
    l--;
    r--;

    String s = "atcoder";
    for(int i = 0; i < 7; i++) {
      if(l <= i && i <= r) {
        System.out.print(s.charAt(i));
      }
    }
  }
}
