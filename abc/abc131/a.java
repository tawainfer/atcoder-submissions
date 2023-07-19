// https://atcoder.jp/contests/abc131/submissions/43749587

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    int[] mp = {-1, 1};

    for(int cp = 0; cp < 4; cp++) {
      for(int j = 0; j < 2; j++) {
        int ep = cp + mp[j];
        if(0 <= ep && ep < 4 && s.charAt(cp) == s.charAt(ep)) {
          System.out.println("Bad");
          System.exit(0);
        }
      }
    }

    System.out.println("Good");
  }
}
