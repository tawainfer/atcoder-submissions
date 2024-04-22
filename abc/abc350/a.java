// https://atcoder.jp/contests/abc350/submissions/52684222

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);
    
    String s = stdIn.next();
    int n = Integer.parseInt(s.substring(3));
    
    System.out.print(0 < n && n < 350 && n != 316 ? "Yes" : "No");
  }
}

